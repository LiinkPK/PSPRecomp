/* Entry 0x08833C98 | file offset 0x00030C70 | FUN_08833c98 | bytes 404 */

void FUN_08833c98(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  iVar2 = *(int *)(param_2 + 0x314);
  if ((*(uint *)(param_2 + 900) & 0x4000000) == 0) {
    iVar2 = (int)*(short *)(iVar2 + 0xf2);
    if (iVar2 < 0) {
      uVar1 = *(uint *)(param_2 + 900);
    }
    else {
      if (iVar2 == 0x66) {
        param_1 = 0;
      }
      FUN_0882fa10(param_1,0,param_2 + 0x130,iVar2,0);
      FUN_0882fb90(0x41000000,0,param_2 + 0x130,1);
      uVar1 = *(uint *)(param_2 + 900);
    }
  }
  else {
    fVar3 = (float)FUN_089a4500(*(float *)(param_2 + 0x2e4) - *(float *)(param_2 + 0x84));
    fVar4 = (float)FUN_08838300(param_2);
    if (fVar3 < fVar4 * 0.02) {
      FUN_0882fa10(param_1,0,param_2 + 0x130,1,0);
    }
    else {
      iVar2 = (int)*(short *)(iVar2 + 0xf2);
      if (-1 < iVar2) {
        FUN_0882fa10(param_1,0,param_2 + 0x130,iVar2,0);
        FUN_0882fb90(0x41000000,0,param_2 + 0x130,1);
      }
    }
    uVar1 = *(uint *)(param_2 + 900);
  }
  *(uint *)(param_2 + 900) = uVar1 | 0x200;
  *(uint *)(param_2 + 900) = uVar1 & 0xfffffeff | 0x200;
  *(uint *)(param_2 + 900) = uVar1 & 0xfffff6ff | 0x200;
  FUN_08834c10(param_2,0,0);
  return;
}

