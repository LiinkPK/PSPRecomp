/* Entry 0x0891453C | file offset 0x00111514 | FUN_0891453c | bytes 112 */

void FUN_0891453c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x6d0) + 0x5ac);
  *(undefined1 *)(iVar2 + 0x126) = 0;
  FUN_08864d98(0,0x3f800000);
  iVar1 = func_0x08b4a054(*(undefined4 *)(param_1 + 0x570));
  if (iVar1 != 0) {
    *(undefined1 *)(iVar2 + 0x126) = 1;
    FUN_08864db8();
    FUN_08914b64(param_1,2);
  }
  return;
}

