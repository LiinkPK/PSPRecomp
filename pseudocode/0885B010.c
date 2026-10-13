/* Entry 0x0885B010 | file offset 0x00057FE8 | FUN_0885b010 | bytes 760 */

void FUN_0885b010(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_a0;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  float local_50;
  float local_4c;
  
  iVar6 = *(int *)(param_1 + 0x4b14);
  if (iVar6 != 0) {
    iVar4 = *(int *)(param_1 + 0x4b10);
    iVar5 = 0;
    local_50 = DAT_089d5eac;
    if (0 < iVar6) {
      local_4c = DAT_089d5eac * 0.002;
      do {
        iVar2 = param_1 + iVar4 * 0x40;
        if (0.0 < *(float *)(iVar2 + 0x40)) {
          uVar1 = 0xff;
          fVar7 = *(float *)(iVar2 + 0x40) - local_50;
          *(float *)(iVar2 + 0x44) = *(float *)(iVar2 + 0x44) + local_4c;
          *(float *)(iVar2 + 0x40) = fVar7;
          iVar3 = iVar2 + 0x20;
          if (fVar7 < 30.0) {
            uVar1 = (undefined1)(int)((fVar7 / 30.0) * 255.0);
          }
          *(undefined1 *)(iVar2 + 0x4b) = uVar1;
          if (*(char *)(iVar2 + 0x4d) == '\0') {
            FUN_089a3a44(local_50,auStack_e0,iVar2 + 0x30);
            FUN_089a38a8(iVar3,iVar3,auStack_e0);
          }
          else {
            *(char *)(iVar2 + 0x4d) = *(char *)(iVar2 + 0x4d) + -1;
          }
          FUN_089a3a44(0x3f733333,iVar3,iVar3);
          FUN_089a3a44(local_50,&local_90,iVar3);
          local_a0 = local_90;
          local_bc = local_8c;
          local_c0 = local_90;
          local_b8 = local_88;
          local_b4 = local_84;
          FUN_089a3a44(0x3f000000,&local_70,&local_c0);
          local_b0 = local_70;
          local_cc = local_6c;
          local_d0 = local_70;
          local_c8 = local_68;
          local_c4 = local_64;
          FUN_089a3868(auStack_f0,&local_d0);
          FUN_089a38a8(iVar2 + 0x10,iVar2 + 0x10,auStack_f0);
        }
        else if (iVar4 == *(int *)(param_1 + 0x4b10)) {
          iVar2 = *(int *)(param_1 + 0x4b10) + 1;
          *(int *)(param_1 + 0x4b10) = iVar2;
          if (299 < iVar2) {
            *(undefined4 *)(param_1 + 0x4b10) = 0;
          }
          *(int *)(param_1 + 0x4b14) = *(int *)(param_1 + 0x4b14) + -1;
        }
        iVar4 = iVar4 + 1;
        if (299 < iVar4) {
          iVar4 = 0;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar6);
    }
  }
  return;
}

