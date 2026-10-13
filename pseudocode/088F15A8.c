/* Entry 0x088F15A8 | file offset 0x000EE580 | FUN_088f15a8 | bytes 436 */

int FUN_088f15a8(int param_1)

{
  int iVar1;
  short *psVar2;
  short *psVar3;
  int iVar4;
  uint uVar5;
  short local_1b0 [2];
  undefined1 auStack_1ac [4];
  undefined1 local_1a8 [380];
  short *local_2c;
  
  psVar3 = local_1b0;
  iVar1 = FUN_088f175c();
  iVar4 = DAT_089d712c;
  if (iVar1 == 0) {
    if (param_1 == 0) {
      iVar1 = FUN_088c4f74((int)*(short *)(DAT_089d712c + 0x1dee0));
      if (iVar1 == 0) {
        return 0;
      }
      local_1b0[0] = *(short *)(iVar1 + 8);
      local_2c = (short *)(iVar4 + 0x1deec);
      local_1b0[1] = *(short *)(iVar1 + 10);
    }
    else {
      iVar1 = FUN_088c4fdc((int)*(short *)(DAT_089d712c + 0x1dee2));
      if (iVar1 == 0) {
        return 0;
      }
      local_1b0[0] = *(short *)(iVar1 + 8);
      local_2c = (short *)(iVar4 + 0x1def4);
      local_1b0[1] = *(short *)(iVar1 + 10);
    }
    iVar4 = 0;
    uVar5 = (uint)(local_1b0[0] != -1);
    if (local_1b0[1] != -1) {
      uVar5 = uVar5 + 1;
    }
    FUN_088c1c0c(auStack_1ac);
    iVar1 = 0;
    if (uVar5 != 0) {
      psVar2 = local_2c;
      do {
        if ((*psVar2 == -1) && (*psVar3 != -1)) {
          FUN_088c1cd4(auStack_1ac,local_1a8,*psVar3,1);
          iVar4 = iVar4 + 1;
          *psVar2 = (short)local_1a8._0_4_;
          psVar3 = psVar3 + 1;
          psVar2[1] = (short)local_1a8._4_4_;
        }
        iVar1 = iVar1 + 1;
        psVar2 = psVar2 + 2;
      } while (iVar1 < (int)uVar5);
    }
  }
  else {
    iVar4 = 0;
  }
  return iVar4;
}

