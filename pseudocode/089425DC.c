/* Entry 0x089425DC | file offset 0x0013F5B4 | FUN_089425dc | bytes 788 */

void FUN_089425dc(int *param_1,undefined4 param_2,int param_3,uint *param_4,float *param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  float fVar10;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  iVar1 = *param_1;
  local_40 = *(undefined4 *)(iVar1 + 0x40);
  local_3c = *(undefined4 *)(iVar1 + 0x44);
  local_38 = 0x3f800000;
  local_34 = *(undefined4 *)(iVar1 + 0x48);
  local_30 = *(undefined4 *)(iVar1 + 0x4c);
  local_2c = 0;
  FUN_089a296c(2);
  FUN_089a29c4();
  FUN_089a250c();
  FUN_089a2678(&local_34);
  FUN_089a26c8(&local_40);
  FUN_089a2568();
  uVar9 = (uint)(param_5[3] * 2.0);
  fVar8 = *param_5;
  fVar7 = param_5[1];
  fVar10 = param_5[2];
  if (0xff < uVar9) {
    uVar9 = 0xff;
  }
  if (fVar8 < 2.1474836e+09) {
    uVar3 = (uint)fVar8;
  }
  else {
    uVar3 = (int)(fVar8 - 2.1474836e+09) + 0x80000000;
  }
  if (2.1474836e+09 <= fVar7) {
    fVar7 = fVar7 - 2.1474836e+09;
  }
  if (2.1474836e+09 <= fVar10) {
    fVar10 = fVar10 - 2.1474836e+09;
  }
  uVar9 = uVar9 << 0x18 | uVar3 | (int)fVar7 << 8 | (int)fVar10 << 0x10;
  FUN_089a0384(10);
  FUN_0899ffc8(0);
  FUN_089a0c20(uVar9);
  FUN_089a0d84(0,1,uVar9);
  iVar1 = *param_1 + *(int *)(*param_1 + 0x38) + param_3 * 0xc;
  iVar4 = 0;
  iVar5 = 0;
  if (0 < *(int *)(iVar1 + 4)) {
    do {
      iVar2 = *param_1;
      piVar6 = (int *)(iVar2 + *(int *)(iVar2 + 0x3c) +
                      *(int *)(iVar2 + *(int *)(iVar1 + 8) + iVar5) * 0x1c);
      uVar9 = piVar6[4];
      if (*param_4 != uVar9) {
        FUN_089a12a4(uVar9 & 0xf,(int)uVar9 >> 8 & 0xf,(int)uVar9 >> 0x10 & 0xf,piVar6[5],piVar6[6])
        ;
        *param_4 = uVar9;
      }
      FUN_089a0c60(1,piVar6[1]);
      FUN_08973334(param_2,*(undefined4 *)(*param_1 + *(int *)(*param_1 + 0x30) + *piVar6 * 8 + 4),5
                   ,1,0,0);
      FUN_089a0520(4,0x81,piVar6[2],0,*param_1 + piVar6[3]);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar4 < *(int *)(iVar1 + 4));
  }
  FUN_089a03dc(10);
  FUN_089a2a40();
  FUN_089a2568();
  return;
}

