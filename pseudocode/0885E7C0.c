/* Entry 0x0885E7C0 | file offset 0x0005B798 | FUN_0885e7c0 | bytes 116 */

int FUN_0885e7c0(int param_1)

{
  FUN_089a3ebc();
  FUN_089a3890(param_1 + 0x40);
  FUN_089a3890(param_1 + 0x50);
  FUN_089a3890(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x48) = 0x3f800000;
  *(undefined4 *)(param_1 + 100) = 0x3f800000;
  return param_1;
}

