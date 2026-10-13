/* Entry 0x08814C0C | file offset 0x00011BE4 | FUN_08814c0c | bytes 136 */

void FUN_08814c0c(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x544) = &DAT_089c7248;
    FUN_08814d08(param_1);
    FUN_08821110(param_1 + 0x5dc,2);
    FUN_08817c7c(param_1 + 0x5b0,2);
    FUN_088222cc(param_1 + 0x570,2);
    FUN_088310bc(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_0883133c(param_1);
    }
  }
  return;
}

