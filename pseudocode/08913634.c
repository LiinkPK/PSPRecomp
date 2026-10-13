/* Entry 0x08913634 | file offset 0x0011060C | FUN_08913634 | bytes 140 */

void FUN_08913634(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x68) == 5) && (2.0 < *(float *)(param_1 + 0x6c))) {
    iVar1 = FUN_088eb17c(param_1 + 0x720);
    if (iVar1 != 0) {
      FUN_08914c54(param_1);
      FUN_08916f38();
    }
    FUN_088eb65c(param_1 + 0x720);
  }
  return;
}

