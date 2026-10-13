/* Entry 0x08998298 | file offset 0x00195270 | FUN_08998298 | bytes 656 */

int FUN_08998298(int param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
  uVar5 = CONCAT44(param_2,param_1);
  iVar3 = (int)(param_2 & 0x7ff00000) >> 0x14;
  if (iVar3 == 0) {
    if (param_1 == 0 && (param_2 & 0x7fffffff) == 0) {
      return param_1;
    }
    uVar5 = FUN_0899a1f4(param_1,param_2,0,0x43500000);
    uVar2 = (uint)((ulonglong)uVar5 >> 0x20);
    iVar3 = ((int)(uVar2 & 0x7ff00000) >> 0x14) + -0x36;
    if (param_3 < -50000) {
      iVar3 = FUN_0899a1f4((int)uVar5,uVar2,0xc2f8f359,0x1a56e1f);
      return iVar3;
    }
  }
  uVar2 = (uint)((ulonglong)uVar5 >> 0x20);
  iVar1 = (int)uVar5;
  iVar4 = iVar3 + param_3;
  if (iVar3 == 0x7ff) {
    iVar3 = FUN_0899a118(iVar1,uVar2,iVar1,uVar2);
    return iVar3;
  }
  if (0x7fe < iVar4) {
    uVar5 = FUN_08998528(0x8800759c,0x7e37e43c,iVar1,uVar2);
    iVar3 = FUN_0899a1f4((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0x8800759c,0x7e37e43c);
    return iVar3;
  }
  if (0 < iVar4) {
    return iVar1;
  }
  if (iVar4 < -0x35) {
    if (param_3 < 0xc351) {
      uVar5 = FUN_08998528(0xc2f8f359,0x1a56e1f,iVar1,uVar2);
      iVar3 = FUN_0899a1f4((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0xc2f8f359,0x1a56e1f);
    }
    else {
      uVar5 = FUN_08998528(0x8800759c,0x7e37e43c,iVar1,uVar2);
      iVar3 = FUN_0899a1f4((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0x8800759c,0x7e37e43c);
    }
    return iVar3;
  }
  iVar3 = FUN_0899a1f4(iVar1,uVar2 & 0x800fffff | (iVar4 + 0x36) * 0x100000,0,0x3c900000);
  return iVar3;
}

