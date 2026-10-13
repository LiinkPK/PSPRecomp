/* Entry 0x088658B0 | file offset 0x00062888 | FUN_088658b0 | bytes 104 */

void FUN_088658b0(int param_1,uint param_2)

{
  if (param_1 != 0) {
    FUN_08864c48(param_1 + 0x8b0,2);
    FUN_088734d4(param_1 + 0x7e0,2);
    FUN_0885e834(param_1 + 0x720,2);
    if ((param_2 & 1) != 0) {
      FUN_08992f04(param_1);
    }
  }
  return;
}

