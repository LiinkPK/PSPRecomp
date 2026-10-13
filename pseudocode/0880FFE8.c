/* Entry 0x0880FFE8 | file offset 0x0000CFC0 | FUN_0880ffe8 | bytes 124 */

void FUN_0880ffe8(int param_1)

{
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  FUN_089a3ebc();
  FUN_089a3890(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0x3f800000;
  FUN_089a3890(param_1 + 0x50);
  FUN_089a3890(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0xc0) = 0xffffffff;
  FUN_0880fea0(param_1,1,0);
  return;
}

