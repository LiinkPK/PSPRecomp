/* Entry 0x0885B524 | file offset 0x000584FC | FUN_0885b524 | bytes 724 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0885b524(float param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
                 )

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 auStack_60 [8];
  undefined4 local_40;
  
  iVar5 = *(int *)(param_2 + 0x4b14);
  if (iVar5 < 300) {
    *(int *)(param_2 + 0x4b14) = iVar5 + 1;
    param_2 = param_2 + ((*(int *)(param_2 + 0x4b10) + iVar5) % 300) * 0x40;
    iVar1 = param_2 + 0x10;
    iVar6 = param_2 + 0x20;
    puVar4 = (undefined4 *)(param_2 + 0x48);
    iVar5 = param_2 + 0x30;
  }
  else {
    iVar5 = *(int *)(param_2 + 0x4b10);
    *(int *)(param_2 + 0x4b10) = iVar5 + 1;
    iVar5 = param_2 + iVar5 * 0x40;
    iVar1 = iVar5 + 0x10;
    iVar6 = iVar5 + 0x20;
    puVar4 = (undefined4 *)(iVar5 + 0x48);
    iVar5 = iVar5 + 0x30;
    if (299 < *(int *)(param_2 + 0x4b10)) {
      *(undefined4 *)(param_2 + 0x4b10) = 0;
    }
  }
  local_40 = param_4;
  FUN_089a3868(iVar1,param_3);
  DAT_09afb89c = DAT_09afb89c * 0x343fd + 0x269ec3;
  *(float *)(iVar1 + 0x30) = (float)(DAT_09afb89c >> 0x10 & 0x7fff) * 3.051851e-05 * 60.0 + 60.0;
  DAT_09afb89c = DAT_09afb89c * 0x343fd + 0x269ec3;
  *(float *)(iVar1 + 0x34) = (float)(DAT_09afb89c >> 0x10 & 0x7fff) * 3.051851e-05 * 0.5 + 0.5;
  FUN_089a3868(iVar6,local_40);
  *puVar4 = param_5;
  iVar6 = *(int *)(_DAT_08b54330 + 0x196c);
  if (iVar6 == 0) {
    puVar4 = &DAT_09af8ab0;
  }
  else {
    puVar4 = auStack_60;
    (**(code **)(*(int *)(iVar6 + 8) + 0x74))
              (puVar4,iVar6 + *(short *)(*(int *)(iVar6 + 8) + 0x70),param_3);
  }
  local_80 = *puVar4;
  local_7c = puVar4[1];
  local_78 = puVar4[2];
  local_74 = puVar4[3];
  local_70 = local_80;
  local_6c = local_7c;
  local_68 = local_78;
  local_64 = local_74;
  FUN_089a3868(iVar5,&local_80);
  *(char *)(iVar1 + 0x3d) = (char)(int)(param_1 * 0.5);
  DAT_09afb89c = DAT_09afb89c * 0x343fd + 0x269ec3;
  uVar3 = DAT_09afb89c >> 0x10 & 0x7fff;
  if ((int)uVar3 < 0) {
    bVar2 = -(-(char)uVar3 & 3U);
  }
  else {
    bVar2 = (byte)((uint)DAT_09afb89c >> 0x10) & 3;
  }
  *(byte *)(iVar1 + 0x3c) = bVar2;
  return;
}

