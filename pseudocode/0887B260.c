/* Entry 0x0887B260 | file offset 0x00078238 | FUN_0887b260 | bytes 344 */

void FUN_0887b260(int *param_1,undefined4 param_2,int param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  param_1[1] = param_3;
  if (DAT_089d68a8 == '\0') {
    uVar1 = FUN_08862c40(param_2,1);
    iVar4 = param_1[1];
  }
  else {
    uVar1 = FUN_088fe7c8(param_2,0);
    iVar4 = param_1[1];
  }
  uVar5 = uVar1;
  if ((param_4 != 0) && (uVar1 < param_4)) {
    uVar5 = param_4;
  }
  iVar4 = FUN_0885c6cc(iVar4,uVar5,0,0,1,0);
  *param_1 = iVar4;
  if (DAT_089d68a8 == '\0') {
    FUN_08862854(param_2,iVar4,uVar1,1);
    iVar4 = *param_1;
  }
  else {
    iVar2 = FUN_088fe708(param_2,iVar4,uVar1,0);
    iVar4 = *param_1;
    if (iVar2 != 0) {
      FUN_088fe944(param_2,iVar4,iVar2);
      iVar4 = *param_1;
    }
  }
  iVar2 = 0;
  if (*(short *)(iVar4 + 10) != 0) {
    do {
      uVar3 = FUN_0887b1b4(param_1,iVar2);
      FUN_0887a6a0(uVar3);
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)(uint)*(ushort *)(iVar4 + 10));
  }
  return;
}

