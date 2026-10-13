/* Entry 0x088D14B8 | file offset 0x000CE490 | FUN_088d14b8 | bytes 224 */

void FUN_088d14b8(undefined4 *param_1,uint param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    FUN_08882158(*param_1);
    if (param_1 != (undefined4 *)0xffff142c) {
      FUN_0899372c(param_1 + 0x3d11,0x10e,0x14,FUN_088de0bc,0,0);
    }
    if (param_1 != (undefined4 *)0xffff3b00) {
      FUN_0899372c(param_1 + 0x31e0,0x50,0x74,FUN_088dcb5c,0,0);
    }
    if (param_1 != (undefined4 *)0xffffcc8c) {
      FUN_0899372c(param_1 + 0x10b1,0x1ea,0x44,FUN_088d99b0,0,0);
    }
    if ((param_2 & 1) != 0) {
      FUN_08992f04(param_1);
    }
  }
  return;
}

