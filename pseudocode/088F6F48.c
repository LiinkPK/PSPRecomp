/* Entry 0x088F6F48 | file offset 0x000F3F20 | FUN_088f6f48 | bytes 104 */

void FUN_088f6f48(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  iVar3 = DAT_089d7f38 + param_1 * 0x6a68;
  iVar2 = 0;
  iVar1 = 0x2a9;
  do {
    uVar4 = ((undefined4 *)(param_3 + iVar2))[1];
    puVar5 = (undefined4 *)(iVar3 + param_2 * 0x1548 + 0x70c + iVar2);
    *puVar5 = *(undefined4 *)(param_3 + iVar2);
    puVar5[1] = uVar4;
    iVar1 = iVar1 + -1;
    iVar2 = iVar2 + 8;
  } while (iVar1 != 0);
  return;
}

