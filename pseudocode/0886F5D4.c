/* Entry 0x0886F5D4 | file offset 0x0006C5AC | FUN_0886f5d4 | bytes 180 */

void FUN_0886f5d4(undefined4 param_1,int param_2)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  
  *(undefined1 *)(param_2 + 0x10) = 8;
  *(undefined4 *)(param_2 + 8) = 0;
  uVar3 = FUN_0886f9a8(param_1,param_2,0x1bb78);
  *(undefined4 *)(param_2 + 8) = uVar3;
  FUN_0886f5a4(param_1,*(undefined1 *)(param_2 + 0x10));
  iVar4 = 0;
  do {
    pcVar5 = (char *)(iVar4 + param_2 + 0x80);
    cVar1 = *pcVar5;
    cVar2 = FUN_0886f5b4(param_1);
    *pcVar5 = cVar1 + cVar2;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x1baf8);
  return;
}

