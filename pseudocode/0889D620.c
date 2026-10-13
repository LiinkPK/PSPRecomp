/* Entry 0x0889D620 | file offset 0x0009A5F8 | FUN_0889d620 | bytes 788 */

float FUN_0889d620(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_70 [12];
  undefined1 auStack_64 [12];
  undefined1 auStack_58 [12];
  undefined1 auStack_4c [12];
  
  iVar3 = param_2 * 0x2c;
  iVar2 = *(int *)(param_1 + 0x68) + iVar3;
  iVar2 = FUN_0889e0f0(*(int *)(param_1 + 0x8c) + *(short *)(iVar2 + 0x28) * 0xc,
                       *(short *)(iVar2 + 0x2a) + -1,param_4);
  iVar1 = *(int *)(param_1 + 0x68) + iVar3;
  fVar7 = 1.0 / (float)(*(short *)(iVar1 + 0x2a) + -1);
  fVar8 = fVar7 * (float)iVar2;
  fVar7 = fVar8 + fVar7;
  FUN_089a34c0(auStack_70,*(int *)(param_1 + 0x8c) + (*(short *)(iVar1 + 0x28) + iVar2) * 0xc);
  FUN_089a34c0(auStack_64,
               *(int *)(param_1 + 0x8c) +
               (*(short *)(*(int *)(param_1 + 0x68) + iVar3 + 0x28) + iVar2) * 0xc + 0xc);
  FUN_089a3528(auStack_58,auStack_70,param_4);
  fVar4 = (float)FUN_089a3718(auStack_58,auStack_58);
  FUN_089a3528(auStack_58,auStack_64,param_4);
  fVar5 = (float)FUN_089a3718(auStack_58,auStack_58);
  iVar3 = 0;
  do {
    if (fVar7 <= fVar8) break;
    fVar6 = (fVar7 - fVar8) * 0.5;
    if (fVar4 < fVar5) {
      fVar7 = fVar7 - fVar6;
      FUN_0889732c(fVar7,param_1,param_2,auStack_64);
      FUN_089a3528(auStack_58,auStack_64,param_4);
      fVar5 = (float)FUN_089a3718(auStack_58,auStack_58);
    }
    else {
      fVar8 = fVar8 + fVar6;
      FUN_0889732c(fVar8,param_1,param_2,auStack_70);
      FUN_089a3528(auStack_58,auStack_70,param_4);
      fVar4 = (float)FUN_089a3718(auStack_58,auStack_58);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 5);
  FUN_089a3528(auStack_58,auStack_64,auStack_70);
  fVar5 = (float)FUN_089a3718(auStack_58,auStack_58);
  if (0.0 < fVar5) {
    FUN_089a3528(auStack_4c,auStack_70,param_4);
    fVar4 = (float)FUN_089a3718(auStack_58,auStack_4c);
    fVar8 = (fVar7 - fVar8) * (-fVar4 / fVar5) + fVar8;
  }
  if (fVar8 < 0.0) {
    fVar8 = 0.0;
  }
  if (1.0 < fVar8) {
    fVar8 = 1.0;
  }
  FUN_0889732c(fVar8,param_1,param_2,param_3);
  return fVar8;
}

