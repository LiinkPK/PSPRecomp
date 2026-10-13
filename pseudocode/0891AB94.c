/* Entry 0x0891AB94 | file offset 0x00117B6C | FUN_0891ab94 | bytes 60 */

void FUN_0891ab94(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  iVar2 = 0;
  iVar1 = 0x2d;
  do {
    uVar3 = ((undefined4 *)(param_2 + iVar2))[1];
    puVar4 = (undefined4 *)(param_1 + 0x5d4 + iVar2);
    *puVar4 = *(undefined4 *)(param_2 + iVar2);
    puVar4[1] = uVar3;
    iVar1 = iVar1 + -1;
    iVar2 = iVar2 + 8;
  } while (iVar1 != 0);
  return;
}

