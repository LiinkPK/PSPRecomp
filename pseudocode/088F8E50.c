/* Entry 0x088F8E50 | file offset 0x000F5E28 | FUN_088f8e50 | bytes 60 */

void FUN_088f8e50(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = 0;
  iVar1 = 0xef;
  do {
    uVar3 = ((undefined4 *)(param_1 + iVar2))[1];
    *(undefined4 *)(param_2 + iVar2) = *(undefined4 *)(param_1 + iVar2);
    ((undefined4 *)(param_2 + iVar2))[1] = uVar3;
    iVar1 = iVar1 + -1;
    iVar2 = iVar2 + 8;
  } while (iVar1 != 0);
  return;
}

