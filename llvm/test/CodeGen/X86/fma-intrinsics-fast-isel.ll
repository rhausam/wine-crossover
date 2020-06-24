; NOTE: Assertions have been autogenerated by utils/update_llc_test_checks.py
; RUN: llc < %s -fast-isel -mtriple=x86_64-unknown-unknown -mattr=+fma,-fma4 | FileCheck %s --check-prefix=CHECK

define <4 x float> @test_mm_fmadd_ps(<4 x float> %a, <4 x float> %b, <4 x float> %c) {
; CHECK-LABEL: test_mm_fmadd_ps:
; CHECK:       # %bb.0: # %entry
; CHECK-NEXT:    vfmadd213ps {{.*#+}} xmm0 = (xmm1 * xmm0) + xmm2
; CHECK-NEXT:    retq
entry:
  %0 = tail call <4 x float> @llvm.fma.v4f32(<4 x float> %a, <4 x float> %b, <4 x float> %c) #2
  ret <4 x float> %0
}

define <2 x double> @test_mm_fmadd_pd(<2 x double> %a, <2 x double> %b, <2 x double> %c) {
; CHECK-LABEL: test_mm_fmadd_pd:
; CHECK:       # %bb.0: # %entry
; CHECK-NEXT:    vfmadd213pd {{.*#+}} xmm0 = (xmm1 * xmm0) + xmm2
; CHECK-NEXT:    retq
entry:
  %0 = tail call <2 x double> @llvm.fma.v2f64(<2 x double> %a, <2 x double> %b, <2 x double> %c) #2
  ret <2 x double> %0
}

define <4 x float> @test_mm_fmadd_ss(<4 x float> %a, <4 x float> %b, <4 x float> %c) {
; CHECK-LABEL: test_mm_fmadd_ss:
; CHECK:       # %bb.0: # %entry
; CHECK-NEXT:    vfmadd213ss {{.*#+}} xmm0 = (xmm1 * xmm0) + xmm2
; CHECK-NEXT:    retq
entry:
  %0 = extractelement <4 x float> %a, i64 0
  %1 = extractelement <4 x float> %b, i64 0
  %2 = extractelement <4 x float> %c, i64 0
  %3 = tail call float @llvm.fma.f32(float %0, float %1, float %2) #2
  %4 = insertelement <4 x float> %a, float %3, i64 0
  ret <4 x float> %4
}

define <2 x double> @test_mm_fmadd_sd(<2 x double> %a, <2 x double> %b, <2 x double> %c) {
; CHECK-LABEL: test_mm_fmadd_sd:
; CHECK:       # %bb.0: # %entry
; CHECK-NEXT:    vfmadd213sd {{.*#+}} xmm0 = (xmm1 * xmm0) + xmm2
; CHECK-NEXT:    retq
entry:
  %0 = extractelement <2 x double> %a, i64 0
  %1 = extractelement <2 x double> %b, i64 0
  %2 = extractelement <2 x double> %c, i64 0
  %3 = tail call double @llvm.fma.f64(double %0, double %1, double %2) #2
  %4 = insertelement <2 x double> %a, double %3, i64 0
  ret <2 x double> %4
}

define <4 x float> @test_mm_fmsub_ps(<4 x float> %a, <4 x float> %b, <4 x float> %c) {
; CHECK-LABEL: test_mm_fmsub_ps:
; CHECK:       # %bb.0: # %entry
; CHECK-NEXT:    vxorps {{.*}}(%rip), %xmm2, %xmm2
; CHECK-NEXT:    vfmadd213ps {{.*#+}} xmm0 = (xmm1 * xmm0) + xmm2
; CHECK-NEXT:    retq
entry:
  %sub.i = fsub <4 x float> <float -0.000000e+00, float -0.000000e+00, float -0.000000e+00, float -0.000000e+00>, %c
  %0 = tail call <4 x float> @llvm.fma.v4f32(<4 x float> %a, <4 x float> %b, <4 x float> %sub.i) #2
  ret <4 x float> %0
}

define <2 x double> @test_mm_fmsub_pd(<2 x double> %a, <2 x double> %b, <2 x double> %c) {
; CHECK-LABEL: test_mm_fmsub_pd:
; CHECK:       # %bb.0: # %entry
; CHECK-NEXT:    vxorpd {{.*}}(%rip), %xmm2, %xmm2
; CHECK-NEXT:    vfmadd213pd {{.*#+}} xmm0 = (xmm1 * xmm0) + xmm2
; CHECK-NEXT:    retq
entry:
  %sub.i = fsub <2 x double> <double -0.000000e+00, double -0.000000e+00>, %c
  %0 = tail call <2 x double> @llvm.fma.v2f64(<2 x double> %a, <2 x double> %b, <2 x double> %sub.i) #2
  ret <2 x double> %0
}

define <4 x float> @test_mm_fmsub_ss(<4 x float> %a, <4 x float> %b, <4 x float> %c) {
; CHECK-LABEL: test_mm_fmsub_ss:
; CHECK:       # %bb.0: # %entry
; CHECK-NEXT:    vfmsub213ss {{.*#+}} xmm0 = (xmm1 * xmm0) - xmm2
; CHECK-NEXT:    retq
entry:
  %0 = extractelement <4 x float> %a, i64 0
  %1 = extractelement <4 x float> %b, i64 0
  %.rhs.i = extractelement <4 x float> %c, i64 0
  %2 = fsub float -0.000000e+00, %.rhs.i
  %3 = tail call float @llvm.fma.f32(float %0, float %1, float %2) #2
  %4 = insertelement <4 x float> %a, float %3, i64 0
  ret <4 x float> %4
}

define <2 x double> @test_mm_fmsub_sd(<2 x double> %a, <2 x double> %b, <2 x double> %c) {
; CHECK-LABEL: test_mm_fmsub_sd:
; CHECK:       # %bb.0: # %entry
; CHECK-NEXT:    vfmsub213sd {{.*#+}} xmm0 = (xmm1 * xmm0) - xmm2
; CHECK-NEXT:    retq
entry:
  %0 = extractelement <2 x double> %a, i64 0
  %1 = extractelement <2 x double> %b, i64 0
  %.rhs.i = extractelement <2 x double> %c, i64 0
  %2 = fsub double -0.000000e+00, %.rhs.i
  %3 = tail call double @llvm.fma.f64(double %0, double %1, double %2) #2
  %4 = insertelement <2 x double> %a, double %3, i64 0
  ret <2 x double> %4
}

define <4 x float> @test_mm_fnmadd_ps(<4 x float> %a, <4 x float> %b, <4 x float> %c) {
; CHECK-LABEL: test_mm_fnmadd_ps:
; CHECK:       # %bb.0: # %entry
; CHECK-NEXT:    vxorps {{.*}}(%rip), %xmm0, %xmm0
; CHECK-NEXT:    vfmadd213ps {{.*#+}} xmm0 = (xmm1 * xmm0) + xmm2
; CHECK-NEXT:    retq
entry:
  %sub.i = fsub <4 x float> <float -0.000000e+00, float -0.000000e+00, float -0.000000e+00, float -0.000000e+00>, %a
  %0 = tail call <4 x float> @llvm.fma.v4f32(<4 x float> %sub.i, <4 x float> %b, <4 x float> %c) #2
  ret <4 x float> %0
}

define <2 x double> @test_mm_fnmadd_pd(<2 x double> %a, <2 x double> %b, <2 x double> %c) {
; CHECK-LABEL: test_mm_fnmadd_pd:
; CHECK:       # %bb.0: # %entry
; CHECK-NEXT:    vxorpd {{.*}}(%rip), %xmm0, %xmm0
; CHECK-NEXT:    vfmadd213pd {{.*#+}} xmm0 = (xmm1 * xmm0) + xmm2
; CHECK-NEXT:    retq
entry:
  %sub.i = fsub <2 x double> <double -0.000000e+00, double -0.000000e+00>, %a
  %0 = tail call <2 x double> @llvm.fma.v2f64(<2 x double> %sub.i, <2 x double> %b, <2 x double> %c) #2
  ret <2 x double> %0
}

define <4 x float> @test_mm_fnmadd_ss(<4 x float> %a, <4 x float> %b, <4 x float> %c) {
; CHECK-LABEL: test_mm_fnmadd_ss:
; CHECK:       # %bb.0: # %entry
; CHECK-NEXT:    vfnmadd213ss {{.*#+}} xmm0 = -(xmm1 * xmm0) + xmm2
; CHECK-NEXT:    retq
entry:
  %0 = extractelement <4 x float> %a, i64 0
  %.rhs.i = extractelement <4 x float> %b, i64 0
  %1 = fsub float -0.000000e+00, %.rhs.i
  %2 = extractelement <4 x float> %c, i64 0
  %3 = tail call float @llvm.fma.f32(float %0, float %1, float %2) #2
  %4 = insertelement <4 x float> %a, float %3, i64 0
  ret <4 x float> %4
}

define <2 x double> @test_mm_fnmadd_sd(<2 x double> %a, <2 x double> %b, <2 x double> %c) {
; CHECK-LABEL: test_mm_fnmadd_sd:
; CHECK:       # %bb.0: # %entry
; CHECK-NEXT:    vfnmadd213sd {{.*#+}} xmm0 = -(xmm1 * xmm0) + xmm2
; CHECK-NEXT:    retq
entry:
  %0 = extractelement <2 x double> %a, i64 0
  %.rhs.i = extractelement <2 x double> %b, i64 0
  %1 = fsub double -0.000000e+00, %.rhs.i
  %2 = extractelement <2 x double> %c, i64 0
  %3 = tail call double @llvm.fma.f64(double %0, double %1, double %2) #2
  %4 = insertelement <2 x double> %a, double %3, i64 0
  ret <2 x double> %4
}

define <4 x float> @test_mm_fnmsub_ps(<4 x float> %a, <4 x float> %b, <4 x float> %c) {
; CHECK-LABEL: test_mm_fnmsub_ps:
; CHECK:       # %bb.0: # %entry
; CHECK-NEXT:    vmovaps {{.*#+}} xmm3 = [-0,-0,-0,-0]
; CHECK-NEXT:    vxorps %xmm3, %xmm0, %xmm4
; CHECK-NEXT:    vxorps %xmm3, %xmm2, %xmm0
; CHECK-NEXT:    vfmadd231ps {{.*#+}} xmm0 = (xmm1 * xmm4) + xmm0
; CHECK-NEXT:    retq
entry:
  %sub.i = fsub <4 x float> <float -0.000000e+00, float -0.000000e+00, float -0.000000e+00, float -0.000000e+00>, %a
  %sub1.i = fsub <4 x float> <float -0.000000e+00, float -0.000000e+00, float -0.000000e+00, float -0.000000e+00>, %c
  %0 = tail call <4 x float> @llvm.fma.v4f32(<4 x float> %sub.i, <4 x float> %b, <4 x float> %sub1.i) #2
  ret <4 x float> %0
}

define <2 x double> @test_mm_fnmsub_pd(<2 x double> %a, <2 x double> %b, <2 x double> %c) {
; CHECK-LABEL: test_mm_fnmsub_pd:
; CHECK:       # %bb.0: # %entry
; CHECK-NEXT:    vmovapd {{.*#+}} xmm3 = [-0,-0]
; CHECK-NEXT:    vxorpd %xmm3, %xmm0, %xmm4
; CHECK-NEXT:    vxorpd %xmm3, %xmm2, %xmm0
; CHECK-NEXT:    vfmadd231pd {{.*#+}} xmm0 = (xmm1 * xmm4) + xmm0
; CHECK-NEXT:    retq
entry:
  %sub.i = fsub <2 x double> <double -0.000000e+00, double -0.000000e+00>, %a
  %sub1.i = fsub <2 x double> <double -0.000000e+00, double -0.000000e+00>, %c
  %0 = tail call <2 x double> @llvm.fma.v2f64(<2 x double> %sub.i, <2 x double> %b, <2 x double> %sub1.i) #2
  ret <2 x double> %0
}

define <4 x float> @test_mm_fnmsub_ss(<4 x float> %a, <4 x float> %b, <4 x float> %c) {
; CHECK-LABEL: test_mm_fnmsub_ss:
; CHECK:       # %bb.0: # %entry
; CHECK-NEXT:    vfnmsub213ss {{.*#+}} xmm0 = -(xmm1 * xmm0) - xmm2
; CHECK-NEXT:    retq
entry:
  %0 = extractelement <4 x float> %a, i64 0
  %.rhs.i = extractelement <4 x float> %b, i64 0
  %1 = fsub float -0.000000e+00, %.rhs.i
  %.rhs2.i = extractelement <4 x float> %c, i64 0
  %2 = fsub float -0.000000e+00, %.rhs2.i
  %3 = tail call float @llvm.fma.f32(float %0, float %1, float %2) #2
  %4 = insertelement <4 x float> %a, float %3, i64 0
  ret <4 x float> %4
}

define <2 x double> @test_mm_fnmsub_sd(<2 x double> %a, <2 x double> %b, <2 x double> %c) {
; CHECK-LABEL: test_mm_fnmsub_sd:
; CHECK:       # %bb.0: # %entry
; CHECK-NEXT:    vfnmsub213sd {{.*#+}} xmm0 = -(xmm1 * xmm0) - xmm2
; CHECK-NEXT:    retq
entry:
  %0 = extractelement <2 x double> %a, i64 0
  %.rhs.i = extractelement <2 x double> %b, i64 0
  %1 = fsub double -0.000000e+00, %.rhs.i
  %.rhs2.i = extractelement <2 x double> %c, i64 0
  %2 = fsub double -0.000000e+00, %.rhs2.i
  %3 = tail call double @llvm.fma.f64(double %0, double %1, double %2) #2
  %4 = insertelement <2 x double> %a, double %3, i64 0
  ret <2 x double> %4
}

define <4 x float> @test_mm_fmaddsub_ps(<4 x float> %a, <4 x float> %b, <4 x float> %c) {
; CHECK-LABEL: test_mm_fmaddsub_ps:
; CHECK:       # %bb.0: # %entry
; CHECK-NEXT:    vfmaddsub213ps {{.*#+}} xmm0 = (xmm1 * xmm0) +/- xmm2
; CHECK-NEXT:    retq
entry:
  %0 = tail call <4 x float> @llvm.fma.v4f32(<4 x float> %a, <4 x float> %b, <4 x float> %c) #2
  %1 = fsub <4 x float> <float -0.000000e+00, float -0.000000e+00, float -0.000000e+00, float -0.000000e+00>, %c
  %2 = tail call <4 x float> @llvm.fma.v4f32(<4 x float> %a, <4 x float> %b, <4 x float> %1) #2
  %3 = shufflevector <4 x float> %2, <4 x float> %0, <4 x i32> <i32 0, i32 5, i32 2, i32 7>
  ret <4 x float> %3
}

define <2 x double> @test_mm_fmaddsub_pd(<2 x double> %a, <2 x double> %b, <2 x double> %c) {
; CHECK-LABEL: test_mm_fmaddsub_pd:
; CHECK:       # %bb.0: # %entry
; CHECK-NEXT:    vfmaddsub213pd {{.*#+}} xmm0 = (xmm1 * xmm0) +/- xmm2
; CHECK-NEXT:    retq
entry:
  %0 = tail call <2 x double> @llvm.fma.v2f64(<2 x double> %a, <2 x double> %b, <2 x double> %c) #2
  %1 = fsub <2 x double> <double -0.000000e+00, double -0.000000e+00>, %c
  %2 = tail call <2 x double> @llvm.fma.v2f64(<2 x double> %a, <2 x double> %b, <2 x double> %1) #2
  %3 = shufflevector <2 x double> %2, <2 x double> %0, <2 x i32> <i32 0, i32 3>
  ret <2 x double> %3
}

define <4 x float> @test_mm_fmsubadd_ps(<4 x float> %a, <4 x float> %b, <4 x float> %c) {
; CHECK-LABEL: test_mm_fmsubadd_ps:
; CHECK:       # %bb.0: # %entry
; CHECK-NEXT:    vfmsubadd213ps {{.*#+}} xmm0 = (xmm1 * xmm0) -/+ xmm2
; CHECK-NEXT:    retq
entry:
  %sub.i = fsub <4 x float> <float -0.000000e+00, float -0.000000e+00, float -0.000000e+00, float -0.000000e+00>, %c
  %0 = tail call <4 x float> @llvm.fma.v4f32(<4 x float> %a, <4 x float> %b, <4 x float> %sub.i) #2
  %1 = tail call <4 x float> @llvm.fma.v4f32(<4 x float> %a, <4 x float> %b, <4 x float> %c) #2
  %2 = shufflevector <4 x float> %1, <4 x float> %0, <4 x i32> <i32 0, i32 5, i32 2, i32 7>
  ret <4 x float> %2
}

define <2 x double> @test_mm_fmsubadd_pd(<2 x double> %a, <2 x double> %b, <2 x double> %c) {
; CHECK-LABEL: test_mm_fmsubadd_pd:
; CHECK:       # %bb.0: # %entry
; CHECK-NEXT:    vfmsubadd213pd {{.*#+}} xmm0 = (xmm1 * xmm0) -/+ xmm2
; CHECK-NEXT:    retq
entry:
  %sub.i = fsub <2 x double> <double -0.000000e+00, double -0.000000e+00>, %c
  %0 = tail call <2 x double> @llvm.fma.v2f64(<2 x double> %a, <2 x double> %b, <2 x double> %sub.i) #2
  %1 = tail call <2 x double> @llvm.fma.v2f64(<2 x double> %a, <2 x double> %b, <2 x double> %c) #2
  %2 = shufflevector <2 x double> %1, <2 x double> %0, <2 x i32> <i32 0, i32 3>
  ret <2 x double> %2
}

define <8 x float> @test_mm256_fmadd_ps(<8 x float> %a, <8 x float> %b, <8 x float> %c) {
; CHECK-LABEL: test_mm256_fmadd_ps:
; CHECK:       # %bb.0: # %entry
; CHECK-NEXT:    vfmadd213ps {{.*#+}} ymm0 = (ymm1 * ymm0) + ymm2
; CHECK-NEXT:    retq
entry:
  %0 = tail call <8 x float> @llvm.fma.v8f32(<8 x float> %a, <8 x float> %b, <8 x float> %c) #2
  ret <8 x float> %0
}

define <4 x double> @test_mm256_fmadd_pd(<4 x double> %a, <4 x double> %b, <4 x double> %c) {
; CHECK-LABEL: test_mm256_fmadd_pd:
; CHECK:       # %bb.0: # %entry
; CHECK-NEXT:    vfmadd213pd {{.*#+}} ymm0 = (ymm1 * ymm0) + ymm2
; CHECK-NEXT:    retq
entry:
  %0 = tail call <4 x double> @llvm.fma.v4f64(<4 x double> %a, <4 x double> %b, <4 x double> %c) #2
  ret <4 x double> %0
}

define <8 x float> @test_mm256_fmsub_ps(<8 x float> %a, <8 x float> %b, <8 x float> %c) {
; CHECK-LABEL: test_mm256_fmsub_ps:
; CHECK:       # %bb.0: # %entry
; CHECK-NEXT:    vxorps {{.*}}(%rip), %ymm2, %ymm2
; CHECK-NEXT:    vfmadd213ps {{.*#+}} ymm0 = (ymm1 * ymm0) + ymm2
; CHECK-NEXT:    retq
entry:
  %sub.i = fsub <8 x float> <float -0.000000e+00, float -0.000000e+00, float -0.000000e+00, float -0.000000e+00, float -0.000000e+00, float -0.000000e+00, float -0.000000e+00, float -0.000000e+00>, %c
  %0 = tail call <8 x float> @llvm.fma.v8f32(<8 x float> %a, <8 x float> %b, <8 x float> %sub.i) #2
  ret <8 x float> %0
}

define <4 x double> @test_mm256_fmsub_pd(<4 x double> %a, <4 x double> %b, <4 x double> %c) {
; CHECK-LABEL: test_mm256_fmsub_pd:
; CHECK:       # %bb.0: # %entry
; CHECK-NEXT:    vxorpd {{.*}}(%rip), %ymm2, %ymm2
; CHECK-NEXT:    vfmadd213pd {{.*#+}} ymm0 = (ymm1 * ymm0) + ymm2
; CHECK-NEXT:    retq
entry:
  %sub.i = fsub <4 x double> <double -0.000000e+00, double -0.000000e+00, double -0.000000e+00, double -0.000000e+00>, %c
  %0 = tail call <4 x double> @llvm.fma.v4f64(<4 x double> %a, <4 x double> %b, <4 x double> %sub.i) #2
  ret <4 x double> %0
}

define <8 x float> @test_mm256_fnmadd_ps(<8 x float> %a, <8 x float> %b, <8 x float> %c) {
; CHECK-LABEL: test_mm256_fnmadd_ps:
; CHECK:       # %bb.0: # %entry
; CHECK-NEXT:    vxorps {{.*}}(%rip), %ymm0, %ymm0
; CHECK-NEXT:    vfmadd213ps {{.*#+}} ymm0 = (ymm1 * ymm0) + ymm2
; CHECK-NEXT:    retq
entry:
  %sub.i = fsub <8 x float> <float -0.000000e+00, float -0.000000e+00, float -0.000000e+00, float -0.000000e+00, float -0.000000e+00, float -0.000000e+00, float -0.000000e+00, float -0.000000e+00>, %a
  %0 = tail call <8 x float> @llvm.fma.v8f32(<8 x float> %sub.i, <8 x float> %b, <8 x float> %c) #2
  ret <8 x float> %0
}

define <4 x double> @test_mm256_fnmadd_pd(<4 x double> %a, <4 x double> %b, <4 x double> %c) {
; CHECK-LABEL: test_mm256_fnmadd_pd:
; CHECK:       # %bb.0: # %entry
; CHECK-NEXT:    vxorpd {{.*}}(%rip), %ymm0, %ymm0
; CHECK-NEXT:    vfmadd213pd {{.*#+}} ymm0 = (ymm1 * ymm0) + ymm2
; CHECK-NEXT:    retq
entry:
  %sub.i = fsub <4 x double> <double -0.000000e+00, double -0.000000e+00, double -0.000000e+00, double -0.000000e+00>, %a
  %0 = tail call <4 x double> @llvm.fma.v4f64(<4 x double> %sub.i, <4 x double> %b, <4 x double> %c) #2
  ret <4 x double> %0
}

define <8 x float> @test_mm256_fnmsub_ps(<8 x float> %a, <8 x float> %b, <8 x float> %c) {
; CHECK-LABEL: test_mm256_fnmsub_ps:
; CHECK:       # %bb.0: # %entry
; CHECK-NEXT:    vmovaps {{.*#+}} ymm3 = [-0,-0,-0,-0,-0,-0,-0,-0]
; CHECK-NEXT:    vxorps %ymm3, %ymm0, %ymm4
; CHECK-NEXT:    vxorps %ymm3, %ymm2, %ymm0
; CHECK-NEXT:    vfmadd231ps {{.*#+}} ymm0 = (ymm1 * ymm4) + ymm0
; CHECK-NEXT:    retq
entry:
  %sub.i = fsub <8 x float> <float -0.000000e+00, float -0.000000e+00, float -0.000000e+00, float -0.000000e+00, float -0.000000e+00, float -0.000000e+00, float -0.000000e+00, float -0.000000e+00>, %a
  %sub1.i = fsub <8 x float> <float -0.000000e+00, float -0.000000e+00, float -0.000000e+00, float -0.000000e+00, float -0.000000e+00, float -0.000000e+00, float -0.000000e+00, float -0.000000e+00>, %c
  %0 = tail call <8 x float> @llvm.fma.v8f32(<8 x float> %sub.i, <8 x float> %b, <8 x float> %sub1.i) #2
  ret <8 x float> %0
}

define <4 x double> @test_mm256_fnmsub_pd(<4 x double> %a, <4 x double> %b, <4 x double> %c) {
; CHECK-LABEL: test_mm256_fnmsub_pd:
; CHECK:       # %bb.0: # %entry
; CHECK-NEXT:    vmovapd {{.*#+}} ymm3 = [-0,-0,-0,-0]
; CHECK-NEXT:    vxorpd %ymm3, %ymm0, %ymm4
; CHECK-NEXT:    vxorpd %ymm3, %ymm2, %ymm0
; CHECK-NEXT:    vfmadd231pd {{.*#+}} ymm0 = (ymm1 * ymm4) + ymm0
; CHECK-NEXT:    retq
entry:
  %sub.i = fsub <4 x double> <double -0.000000e+00, double -0.000000e+00, double -0.000000e+00, double -0.000000e+00>, %a
  %sub1.i = fsub <4 x double> <double -0.000000e+00, double -0.000000e+00, double -0.000000e+00, double -0.000000e+00>, %c
  %0 = tail call <4 x double> @llvm.fma.v4f64(<4 x double> %sub.i, <4 x double> %b, <4 x double> %sub1.i) #2
  ret <4 x double> %0
}

define <8 x float> @test_mm256_fmaddsub_ps(<8 x float> %a, <8 x float> %b, <8 x float> %c) {
; CHECK-LABEL: test_mm256_fmaddsub_ps:
; CHECK:       # %bb.0: # %entry
; CHECK-NEXT:    vfmaddsub213ps {{.*#+}} ymm0 = (ymm1 * ymm0) +/- ymm2
; CHECK-NEXT:    retq
entry:
  %0 = tail call <8 x float> @llvm.fma.v8f32(<8 x float> %a, <8 x float> %b, <8 x float> %c) #2
  %1 = fsub <8 x float> <float -0.000000e+00, float -0.000000e+00, float -0.000000e+00, float -0.000000e+00, float -0.000000e+00, float -0.000000e+00, float -0.000000e+00, float -0.000000e+00>, %c
  %2 = tail call <8 x float> @llvm.fma.v8f32(<8 x float> %a, <8 x float> %b, <8 x float> %1) #2
  %3 = shufflevector <8 x float> %2, <8 x float> %0, <8 x i32> <i32 0, i32 9, i32 2, i32 11, i32 4, i32 13, i32 6, i32 15>
  ret <8 x float> %3
}

define <4 x double> @test_mm256_fmaddsub_pd(<4 x double> %a, <4 x double> %b, <4 x double> %c) {
; CHECK-LABEL: test_mm256_fmaddsub_pd:
; CHECK:       # %bb.0: # %entry
; CHECK-NEXT:    vfmaddsub213pd {{.*#+}} ymm0 = (ymm1 * ymm0) +/- ymm2
; CHECK-NEXT:    retq
entry:
  %0 = tail call <4 x double> @llvm.fma.v4f64(<4 x double> %a, <4 x double> %b, <4 x double> %c) #2
  %1 = fsub <4 x double> <double -0.000000e+00, double -0.000000e+00, double -0.000000e+00, double -0.000000e+00>, %c
  %2 = tail call <4 x double> @llvm.fma.v4f64(<4 x double> %a, <4 x double> %b, <4 x double> %1) #2
  %3 = shufflevector <4 x double> %2, <4 x double> %0, <4 x i32> <i32 0, i32 5, i32 2, i32 7>
  ret <4 x double> %3
}

define <8 x float> @test_mm256_fmsubadd_ps(<8 x float> %a, <8 x float> %b, <8 x float> %c) {
; CHECK-LABEL: test_mm256_fmsubadd_ps:
; CHECK:       # %bb.0: # %entry
; CHECK-NEXT:    vfmsubadd213ps {{.*#+}} ymm0 = (ymm1 * ymm0) -/+ ymm2
; CHECK-NEXT:    retq
entry:
  %sub.i = fsub <8 x float> <float -0.000000e+00, float -0.000000e+00, float -0.000000e+00, float -0.000000e+00, float -0.000000e+00, float -0.000000e+00, float -0.000000e+00, float -0.000000e+00>, %c
  %0 = tail call <8 x float> @llvm.fma.v8f32(<8 x float> %a, <8 x float> %b, <8 x float> %sub.i) #2
  %1 = tail call <8 x float> @llvm.fma.v8f32(<8 x float> %a, <8 x float> %b, <8 x float> %c) #2
  %2 = shufflevector <8 x float> %1, <8 x float> %0, <8 x i32> <i32 0, i32 9, i32 2, i32 11, i32 4, i32 13, i32 6, i32 15>
  ret <8 x float> %2
}

define <4 x double> @test_mm256_fmsubadd_pd(<4 x double> %a, <4 x double> %b, <4 x double> %c) {
; CHECK-LABEL: test_mm256_fmsubadd_pd:
; CHECK:       # %bb.0: # %entry
; CHECK-NEXT:    vfmsubadd213pd {{.*#+}} ymm0 = (ymm1 * ymm0) -/+ ymm2
; CHECK-NEXT:    retq
entry:
  %sub.i = fsub <4 x double> <double -0.000000e+00, double -0.000000e+00, double -0.000000e+00, double -0.000000e+00>, %c
  %0 = tail call <4 x double> @llvm.fma.v4f64(<4 x double> %a, <4 x double> %b, <4 x double> %sub.i) #2
  %1 = tail call <4 x double> @llvm.fma.v4f64(<4 x double> %a, <4 x double> %b, <4 x double> %c) #2
  %2 = shufflevector <4 x double> %1, <4 x double> %0, <4 x i32> <i32 0, i32 5, i32 2, i32 7>
  ret <4 x double> %2
}

declare <4 x float> @llvm.fma.v4f32(<4 x float>, <4 x float>, <4 x float>) #1
declare <2 x double> @llvm.fma.v2f64(<2 x double>, <2 x double>, <2 x double>) #1
declare float @llvm.fma.f32(float, float, float) #1
declare double @llvm.fma.f64(double, double, double) #1
declare <8 x float> @llvm.fma.v8f32(<8 x float>, <8 x float>, <8 x float>) #1
declare <4 x double> @llvm.fma.v4f64(<4 x double>, <4 x double>, <4 x double>) #1
