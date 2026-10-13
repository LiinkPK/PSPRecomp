/* Entry 0x08875B40 | file offset 0x00072B18 | FUN_08875b40 | bytes 1180 */

undefined4 FUN_08875b40(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  float *pfVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_40 [3];
  
  pfVar6 = local_40;
  iVar1 = FUN_08875978();
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else if (*(char *)(param_1 + 1) == '\0') {
    uVar2 = 0;
  }
  else if (DAT_09afee54 == 0) {
    uVar2 = 0xfffffffe;
  }
  else {
    fVar11 = *(float *)(param_1 + 0x18);
    if (fVar11 != 0.0) {
      *(float *)(param_1 + 4) = *(float *)(param_1 + 4) + fVar11;
      if (0.0 < fVar11) {
        if (*(float *)(param_1 + 0x1c) < *(float *)(param_1 + 4)) {
          *(undefined4 *)(param_1 + 0x18) = 0;
          *(undefined4 *)(param_1 + 4) = 0x3f800000;
        }
      }
      else if ((fVar11 < *(float *)(param_1 + 0x1c)) && (*(float *)(param_1 + 4) < 0.0)) {
        *(undefined4 *)(param_1 + 0x18) = 0;
        *(undefined4 *)(param_1 + 4) = 0;
      }
    }
    uVar2 = FUN_08866ebc(DAT_089d5ec0);
    iVar1 = DAT_09afee54;
    iVar3 = sceGeEdramGetAddr();
    uVar4 = FUN_089a04e8();
    fVar11 = *(float *)(param_1 + 4);
    if (fVar11 <= 0.0) {
      uVar2 = 0;
    }
    else {
      local_40[0] = *(float *)(param_1 + 0x10) * 1.402;
      uVar8 = 0xff000000;
      fVar12 = *(float *)(param_1 + 8) + 1.0;
      uVar9 = 0xff000000;
      local_40[2] = *(float *)(param_1 + 0xc) * 1.772;
      iVar5 = 0;
      local_40[1] = *(float *)(param_1 + 0x10) * -0.34414 - *(float *)(param_1 + 0xc) * 0.71414;
      uVar7 = 0;
      iVar3 = iVar1 + iVar3;
      do {
        fVar10 = *pfVar6;
        if (0.0 <= fVar10) {
          if (fVar10 < 0.0) {
            fVar10 = 0.0;
          }
          if (1.0 < fVar10) {
            fVar10 = 1.0;
          }
          uVar8 = uVar8 | ((int)(fVar10 * 255.0) & 0xffU) << (uVar7 & 0x1f);
        }
        else {
          fVar10 = -fVar10;
          if (fVar10 < 0.0) {
            fVar10 = 0.0;
          }
          if (1.0 < fVar10) {
            fVar10 = 1.0;
          }
          uVar9 = uVar9 | ((int)(fVar10 * 255.0) & 0xffU) << (uVar7 & 0x1f);
        }
        iVar5 = iVar5 + 1;
        pfVar6 = pfVar6 + 1;
        uVar7 = uVar7 + 8;
      } while (iVar5 < 3);
      FUN_089a0ee4();
      FUN_089a0fc8();
      FUN_089a0df4(0,0);
      FUN_089a0e60(1,1);
      FUN_089a03dc(1);
      FUN_089a03dc(6);
      FUN_089a0cf8(1);
      FUN_08875fdc(fVar12 * 0.298912,param_1,iVar1,uVar2,0,0,0,0);
      FUN_08875fdc(fVar12 * 0.586611,param_1,iVar1,uVar2,0,1,5,0);
      FUN_08875fdc(fVar12 * 0.114478,param_1,iVar1,uVar2,0,1,10,0);
      FUN_08875fdc(0,param_1,iVar1,iVar3,1,0,0,0);
      if (uVar8 != 0xff000000) {
        FUN_08875fdc(0,param_1,iVar1,iVar3,2,1,0,uVar8);
      }
      if (uVar9 != 0xff000000) {
        FUN_08875fdc(0,param_1,iVar1,iVar3,2,2,0,uVar9);
      }
      FUN_08875fdc(0,param_1,uVar2,iVar3,3,0,0,(int)(fVar11 * 255.0) << 0x18 | 0xffffff);
      FUN_089a0c8c(0xffffffff);
      FUN_089a0ee4();
      FUN_089a0fc8();
      FUN_089a0e20(0,1);
      FUN_089a0e60(0,0);
      FUN_089a0df4(7,1);
      FUN_089a12a4(0,2,3,0,0);
      FUN_0899fdc4(uVar4);
      uVar2 = 0;
    }
  }
  return uVar2;
}

