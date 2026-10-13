/* Entry 0x08898A64 | file offset 0x00095A3C | FUN_08898a64 | bytes 456 */

int FUN_08898a64(float param_1,int param_2,undefined4 param_3,float *param_4,
                undefined1 (*param_5) [12])

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  int iVar4;
  int iVar5;
  undefined1 (*pauVar6) [12];
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  float fVar11;
  undefined1 auStack_40 [12];
  
  if (*(int *)(param_2 + 0x68) == 0) {
    iVar4 = -1;
  }
  else if (*(int *)(param_2 + 0x9c) == 0) {
    iVar4 = -1;
  }
  else {
    iVar9 = 0;
    *param_4 = 3.4028235e+38;
    iVar4 = -1;
    if (0 < *(int *)(*(int *)(param_2 + 0x58) + 0xc)) {
      iVar8 = 0;
      iVar7 = 0;
      do {
        iVar5 = FUN_08897ad0(param_2,iVar9);
        if (iVar5 != 0) {
          pauVar6 = (undefined1 (*) [12])(*(int *)(param_2 + 0x90) + iVar8);
          auVar3 = vzero_t();
          auVar1 = vsub_t(*pauVar6,*param_5);
          auVar2 = vsub_t(*param_5,pauVar6[1]);
          auVar1 = vmax_t(auVar1,auVar2);
          auVar1 = vmax_t(auVar1,auVar3);
          uVar10 = vdot_t(auVar1,auVar1);
          fVar11 = (float)vsqrt_s(uVar10);
          if (((fVar11 < param_1) &&
              (iVar5 = *(int *)(param_2 + 0x68) + iVar7,
              fVar11 = (float)FUN_0889e198(*(int *)(param_2 + 0x8c) + *(short *)(iVar5 + 0x28) * 0xc
                                           ,*(short *)(iVar5 + 0x2a) + -1,param_5,auStack_40),
              fVar11 < param_1)) && (fVar11 < *param_4)) {
            FUN_089a34c0(param_3,auStack_40);
            *param_4 = fVar11;
            iVar4 = iVar9;
          }
        }
        iVar9 = iVar9 + 1;
        iVar8 = iVar8 + 0x18;
        iVar7 = iVar7 + 0x2c;
      } while (iVar9 < *(int *)(*(int *)(param_2 + 0x58) + 0xc));
    }
  }
  return iVar4;
}

