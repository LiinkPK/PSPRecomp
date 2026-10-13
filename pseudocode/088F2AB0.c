/* Entry 0x088F2AB0 | file offset 0x000EFA88 | FUN_088f2ab0 | bytes 212 */

undefined4 FUN_088f2ab0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_28 [2];
  
  iVar3 = *(int *)(param_1 + 4);
  cVar1 = *(char *)(iVar3 + 0x773);
  iVar4 = 0;
  while (((iVar2 = FUN_088b7b18(iVar3 + 0x10 + cVar1 * 0xc6,iVar4), iVar2 == -1 ||
          (FUN_088b97e8(local_28,iVar2), local_28[0] == 0)) ||
         (*(char *)(local_28[0] + 0xd) != param_2))) {
    iVar4 = iVar4 + 1;
    if (3 < iVar4) {
      return 0;
    }
  }
  return 1;
}

