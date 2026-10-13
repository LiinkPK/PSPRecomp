/* Entry 0x0899D348 | file offset 0x0019A320 | FUN_0899d348 | bytes 812 */

undefined4 FUN_0899d348(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_60 [12];
  int local_54;
  undefined4 local_4c;
  int local_48;
  short local_42;
  int local_40;
  
  uVar2 = 0;
  if (param_1 != 0) {
    FUN_0899bee0();
    FUN_0899d674(param_2,auStack_60);
    iVar3 = (int)(local_54 + -0x36 + ((uint)(local_54 + -0x36 >> 0x1f) >> 0x1e)) >> 2;
    iVar1 = local_48;
    if ((0 < iVar3) && (local_42 < 0x10)) {
      uVar2 = 0x10;
      if (0x10 < iVar3) {
        uVar2 = 0x100;
      }
      FUN_0899ee30(param_1,3,uVar2,1,1,0);
      iVar1 = FUN_0899c24c(param_1,0,0);
      if (iVar1 == 0) {
        return 0;
      }
      FUN_0899dadc(iVar1,param_2 + 0x36,iVar3,1,0xff);
      iVar1 = local_48;
    }
    param_2 = param_2 + local_54;
    iVar3 = iVar1;
    if (iVar1 < -iVar1) {
      iVar3 = -iVar1;
    }
    switch(local_42) {
    case 4:
      FUN_0899eaec(param_1,4,local_4c,iVar3,1,1,0);
      iVar3 = FUN_0899c1d4(param_1,0,0);
      if (iVar3 == 0) {
        return 0;
      }
      if (local_40 == 0) {
        FUN_0899d7cc(iVar3,param_2,local_4c,iVar1);
      }
      else {
        FUN_0899db74(iVar3,param_2,local_4c,iVar1);
      }
      break;
    default:
      return 0;
    case 8:
      FUN_0899eaec(param_1,5,local_4c,iVar3,1,1,0);
      iVar3 = FUN_0899c1d4(param_1,0,0);
      if (iVar3 == 0) {
        return 0;
      }
      if (local_40 == 0) {
        FUN_0899d868(iVar3,param_2,local_4c,iVar1);
      }
      else {
        FUN_0899dd7c(iVar3,param_2,local_4c,iVar1);
      }
      break;
    case 0x10:
      FUN_0899eaec(param_1,1,local_4c,iVar3,1,1,0);
      iVar3 = FUN_0899c1d4(param_1,0,0);
      if (iVar3 == 0) {
        return 0;
      }
      if (local_40 == 0) {
        FUN_0899d8e8(iVar3,param_2,local_4c,iVar1);
      }
      else {
        *(undefined2 *)(*(int *)(param_1 + 0xc) + 4) = 0;
        FUN_0899d994(iVar3,param_2,local_4c,iVar1);
      }
      break;
    case 0x18:
      FUN_0899eaec(param_1,3,local_4c,iVar3,1,1,0);
      iVar3 = FUN_0899c1d4(param_1,0,0);
      if (iVar3 == 0) {
        return 0;
      }
      FUN_0899da38(iVar3,param_2,local_4c,iVar1);
      break;
    case 0x20:
      FUN_0899eaec(param_1,3,local_4c,iVar3,1,1,0);
      iVar3 = FUN_0899c1d4(param_1,0,0);
      if (iVar3 == 0) {
        return 0;
      }
      FUN_0899dadc(iVar3,param_2,local_4c,iVar1,0);
    }
    sceKernelDcacheWritebackAll();
    uVar2 = 1;
  }
  return uVar2;
}

