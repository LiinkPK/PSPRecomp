/* Entry 0x0890C870 | file offset 0x00109848 | FUN_0890c870 | bytes 192 */

void FUN_0890c870(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_20;
  undefined1 local_1c;
  
  local_20 = *(undefined4 *)(param_1 + 0xc);
  local_1c = 1;
  iVar2 = 0;
  iVar1 = param_1 + 0x4c;
  if (0 < *(int *)(param_1 + 0x354)) {
    do {
      FUN_0890569c(param_1,iVar1,&local_20,8);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x54;
    } while (iVar2 < *(int *)(param_1 + 0x354));
  }
  iVar2 = 0;
  iVar1 = param_1 + 0xf4;
  if (0 < *(int *)(param_1 + 0x358)) {
    do {
      FUN_0890569c(param_1,iVar1,&local_20,8);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x4c;
    } while (iVar2 < *(int *)(param_1 + 0x358));
  }
  return;
}

