; RUN: llc < %s -mtriple=x86_64--
; PR 9267

define<4 x i16> @func_16_32() {
  %F = load <4 x i32>, <4 x i32>* undef
  %G = trunc <4 x i32> %F to <4 x i16>
  %H = load <4 x i32>, <4 x i32>* undef
  %Y = trunc <4 x i32> %H to <4 x i16>
  %T = add <4 x i16> %Y, %G
  store <4 x i16>%T , <4 x i16>* undef
  ret <4 x i16> %T
}

define<4 x i16> @func_16_64() {
  %F = load <4 x i64>, <4 x i64>* undef
  %G = trunc <4 x i64> %F to <4 x i16>
  %H = load <4 x i64>, <4 x i64>* undef
  %Y = trunc <4 x i64> %H to <4 x i16>
  %T = xor <4 x i16> %Y, %G
  store <4 x i16>%T , <4 x i16>* undef
  ret <4 x i16> %T
}

define<4 x i32> @func_32_64() {
  %F = load <4 x i64>, <4 x i64>* undef
  %G = trunc <4 x i64> %F to <4 x i32>
  %H = load <4 x i64>, <4 x i64>* undef
  %Y = trunc <4 x i64> %H to <4 x i32>
  %T = or <4 x i32> %Y, %G
  ret <4 x i32> %T
}

define<4 x i8> @func_8_16() {
  %F = load <4 x i16>, <4 x i16>* undef
  %G = trunc <4 x i16> %F to <4 x i8>
  %H = load <4 x i16>, <4 x i16>* undef
  %Y = trunc <4 x i16> %H to <4 x i8>
  %T = add <4 x i8> %Y, %G
  ret <4 x i8> %T
}

define<4 x i8> @func_8_32() {
  %F = load <4 x i32>, <4 x i32>* undef
  %G = trunc <4 x i32> %F to <4 x i8>
  %H = load <4 x i32>, <4 x i32>* undef
  %Y = trunc <4 x i32> %H to <4 x i8>
  %T = sub <4 x i8> %Y, %G
  ret <4 x i8> %T
}

define<4 x i8> @func_8_64() {
  %F = load <4 x i64>, <4 x i64>* undef
  %G = trunc <4 x i64> %F to <4 x i8>
  %H = load <4 x i64>, <4 x i64>* undef
  %Y = trunc <4 x i64> %H to <4 x i8>
  %T = add <4 x i8> %Y, %G
  ret <4 x i8> %T
}

define<4 x i16> @const_16_32() {
  %G = trunc <4 x i32> <i32 0, i32 3, i32 8, i32 7> to <4 x i16>
  ret <4 x i16> %G
}

define<4 x i16> @const_16_64() {
  %G = trunc <4 x i64> <i64 0, i64 3, i64 8, i64 7> to <4 x i16>
  ret <4 x i16> %G
}

define void @bugOnTruncBitwidthReduce() nounwind {
meh:
  %0 = xor <4 x i64> zeroinitializer, zeroinitializer
  %1 = trunc <4 x i64> %0 to <4 x i32>
  %2 = lshr <4 x i32> %1, <i32 18, i32 18, i32 18, i32 18>
  %3 = xor <4 x i32> %2, %1
  ret void
}
