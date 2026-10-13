/* Entry 0x088F5DCC | file offset 0x000F2DA4 | FUN_088f5dcc | bytes 180 */

void FUN_088f5dcc(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar1 = DAT_089d712c;
  iVar5 = DAT_089d712c + 0x1fecc;
  iVar3 = 0;
  iVar2 = 0x215;
  do {
    uVar4 = ((undefined4 *)(param_2 + iVar3))[1];
    *(undefined4 *)(param_1 + iVar3) = *(undefined4 *)(param_2 + iVar3);
    ((undefined4 *)(param_1 + iVar3))[1] = uVar4;
    iVar2 = iVar2 + -1;
    iVar3 = iVar3 + 8;
  } while (iVar2 != 0);
  iVar1 = FUN_088f5ea0(iVar1 + 0x1fde4,param_1 + 0xc);
  if ((iVar1 == 1) || (iVar1 = FUN_088f56ec(iVar5,param_1 + 0xc), iVar1 != 0)) {
    uVar4 = FUN_088f5d40();
    *(undefined4 *)(param_1 + 0xc) = uVar4;
  }
  return;
}

