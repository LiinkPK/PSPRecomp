/* Entry 0x0897A630 | file offset 0x00177608 | FUN_0897a630 | bytes 588 */

void FUN_0897a630(undefined4 param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined1 uVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  uint uVar13;
  undefined4 local_c0 [5];
  undefined4 local_ac;
  undefined4 local_98;
  undefined1 auStack_80 [64];
  undefined1 auStack_40 [12];
  float local_34;
  
  FUN_089a3ebc(local_c0);
  local_c0[0] = *param_3;
  local_ac = param_3[1];
  local_98 = param_3[2];
  FUN_089a3fb8(local_c0,*(undefined4 *)(*(int *)(DAT_09b6f478 + 0x8c) + 0x50),local_c0);
  puVar5 = *(undefined1 **)
            (*(int *)(*(int *)(param_2 + 0x8c) + 0x48) +
            (uint)*(ushort *)(*(int *)(*(int *)(param_2 + 0x90) + 8) + 2) * 4);
  FUN_08946ac4(0x3f800000,param_2,*(int *)(param_2 + 0x8c),local_c0,*puVar5,puVar5[1],puVar5[2],
               auStack_80);
  piVar12 = (int *)*param_4;
  uVar1 = *(undefined1 *)((int)param_3 + 0x2b);
  FUN_0896fb5c(auStack_80);
  uVar3 = FUN_08983db4(uVar1,0,1,2);
  FUN_08983cd8(uVar3);
  FUN_089a03dc(9);
  FUN_08983b74(0);
  FUN_089a3918(auStack_40,
               *(int *)(DAT_09b6f478 + 0x8c) +
               (uint)*(ushort *)
                      (*(int *)(*(int *)(DAT_09b6f478 + 0x90) + 8) +
                      *(int *)(*(int *)(DAT_09b6f478 + 0x90) + 4) * 2) + 0x60,
               *(int *)(DAT_09b6f478 + 0x88) + 0x40);
  FUN_089a4aac(0,0x437f0000,auStack_40,auStack_40);
  FUN_089a3918(auStack_40,&DAT_089da410,auStack_40);
  fVar2 = local_34;
  iVar6 = *piVar12;
  uVar13 = piVar12[1];
  puVar4 = (undefined4 *)FUN_08974a3c(*(undefined4 *)(DAT_09b6f478 + 0xb0),uVar13 << 4);
  uVar10 = 0;
  if (puVar4 != (undefined4 *)0x0) {
    iVar11 = 0;
    if (uVar13 != 0) {
      puVar9 = puVar4 + 1;
      puVar7 = puVar4;
      iVar8 = iVar6;
      do {
        if (*(char *)(iVar6 + 0x34) != '\0') {
          FUN_089a34c0(puVar9,iVar8);
          local_34 = fVar2 * *(float *)(iVar6 + 0x2c);
          uVar3 = FUN_089a48cc(auStack_40);
          *puVar7 = uVar3;
          iVar11 = iVar11 + 1;
          puVar7 = puVar7 + 4;
          puVar9 = puVar9 + 4;
        }
        uVar10 = uVar10 + 1;
        iVar6 = iVar6 + 0x40;
        iVar8 = iVar8 + 0x40;
      } while (uVar10 < uVar13);
    }
    if (iVar11 != 0) {
      FUN_089a0520(0,0x19c,iVar11,0,puVar4);
    }
  }
  return;
}

