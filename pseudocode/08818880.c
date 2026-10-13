/* Entry 0x08818880 | file offset 0x00015858 | FUN_08818880 | bytes 680 */

undefined4 FUN_08818880(int param_1,ushort *param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  FUN_08818818();
  if (param_2 == (ushort *)0x0) {
    return 0xffffffff;
  }
  uVar1 = FUN_08899300();
  FUN_0881baa8();
  iVar5 = (int)(short)*param_2;
  if ((param_3 != (int *)0x0) && (-1 < *param_3)) {
    iVar6 = (int)(short)param_2[2];
    if ((short)(*param_2 & param_2[2]) < 0) {
      return 0xfffffffe;
    }
    iVar2 = FUN_088470b8(*param_3);
    if (iVar2 == 0) {
      return 0xfffffffd;
    }
    iVar7 = 0;
    iVar3 = FUN_08831320(0x610);
    if (iVar3 != 0) {
      FUN_08814bb0(iVar3,iVar2);
      iVar7 = iVar3;
    }
    *(int *)(param_1 + 0x14) = iVar7;
    if (iVar7 == 0) {
      return 0xfffffffc;
    }
    if (iVar6 < 0) {
      puVar4 = (undefined4 *)FUN_088988d4(uVar1,iVar5);
      local_70 = *puVar4;
      local_6c = puVar4[1];
      local_68 = puVar4[2];
      local_64 = 0x3f800000;
      puVar4 = (undefined4 *)FUN_08898934(uVar1,iVar5);
      local_60 = *puVar4;
      local_5c = puVar4[1];
      local_58 = puVar4[2];
      local_54 = 0x3f800000;
      puVar4 = (undefined4 *)FUN_08898994(uVar1,iVar5);
      local_50 = *puVar4;
      local_4c = puVar4[1];
      local_48 = puVar4[2];
      local_44 = 0x3f800000;
      uVar1 = *(undefined4 *)(param_1 + 0x14);
    }
    else {
      puVar4 = (undefined4 *)FUN_08897dec(uVar1,iVar6);
      local_70 = *puVar4;
      local_6c = puVar4[1];
      local_68 = puVar4[2];
      local_64 = 0x3f800000;
      puVar4 = (undefined4 *)FUN_08897e48(uVar1,iVar6);
      local_60 = *puVar4;
      local_5c = puVar4[1];
      local_58 = puVar4[2];
      local_54 = 0x3f800000;
      local_40 = 0x3f800000;
      local_3c = 0x3f800000;
      local_38 = 0x3f800000;
      local_34 = 0x3f800000;
      FUN_089a3868(&local_50,&local_40);
      uVar1 = *(undefined4 *)(param_1 + 0x14);
    }
    FUN_08814d78(uVar1,param_2,param_3,&local_70,&local_60,&local_50);
    iVar5 = (int)(short)*param_2;
  }
  if (((-1 < iVar5) && (*(int *)(param_1 + 0x4c) != 0)) &&
     (*(int *)(*(int *)(param_1 + 0x4c) + 0x5c) == 1)) {
    FUN_08819f1c(param_1 + 0x18,iVar5);
  }
  *(ushort **)(param_1 + 0x48) = param_2;
  *(int **)(param_1 + 0x4c) = param_3;
  *(undefined1 *)(param_1 + 0xc) = 1;
  iVar5 = FUN_08818b28(param_1);
  if (iVar5 == 0) {
    uVar1 = 0;
  }
  else {
    FUN_08818818(param_1);
    uVar1 = 0xfffffffb;
  }
  return uVar1;
}

