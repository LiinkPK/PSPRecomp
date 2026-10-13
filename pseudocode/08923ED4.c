/* Entry 0x08923ED4 | file offset 0x00120EAC | FUN_08923ed4 | bytes 756 */

void FUN_08923ed4(int param_1,undefined2 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  uint local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  int local_60;
  uint local_5c;
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
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  puVar5 = (undefined2 *)(param_3 + 0x1e);
  *(undefined2 *)(*(int *)(param_1 + 0x20) + 0x10) = param_2;
  FUN_089359a4(*(undefined4 *)(param_1 + 0x20),param_3);
  *(short *)(*(int *)(param_1 + 0x20) + 0x12) = (short)*(char *)(param_3 + 0x11);
  *(undefined2 *)(*(int *)(param_1 + 0x20) + 0x14) = *(undefined2 *)(param_3 + 0x12);
  *(undefined2 *)(*(int *)(param_1 + 0x20) + 0x16) = *(undefined2 *)(param_3 + 0x14);
  *(short *)(*(int *)(param_1 + 0x20) + 0x18) = (short)*(char *)(param_3 + 0x10);
  *(undefined2 *)(*(int *)(param_1 + 0x20) + 0x3a) = *(undefined2 *)(param_3 + 0x18);
  *(undefined2 *)(*(int *)(param_1 + 0x20) + 0x3c) = *(undefined2 *)(param_3 + 0x1a);
  *(undefined2 *)(*(int *)(param_1 + 0x20) + 0x3e) = *(undefined2 *)(param_3 + 0x1c);
  iVar3 = 0;
  *(int *)(*(int *)(param_1 + 0x20) + 0x40) = (int)*(short *)(param_3 + 0x16);
  iVar1 = *(int *)(param_1 + 0x20);
  iVar4 = 0;
  do {
    *(undefined2 *)(iVar1 + iVar4 + 0x1a) = *puVar5;
    iVar3 = iVar3 + 1;
    iVar4 = iVar4 + 2;
    puVar5 = puVar5 + 1;
    iVar1 = *(int *)(param_1 + 0x20);
  } while (iVar3 < 0x10);
  if (*(short *)(iVar1 + 0x14) == 1) {
    sVar2 = *(short *)(param_1 + 6);
    if (sVar2 == -1) {
      func_0x08b43aa4(&local_5c,param_5,(int)*(short *)(iVar1 + 0x16));
      local_90 = local_5c;
      local_8c = local_58;
      local_88 = local_54;
      local_84 = local_50;
      local_80 = local_4c;
      local_7c = local_48;
      local_78 = local_44;
      local_74 = local_40;
      local_70 = local_3c;
      local_6c = local_38;
      local_68 = local_34;
      local_64 = local_30;
      iVar1 = sceKernelGetSystemTimeLow();
      local_60 = iVar1 * 0x343fd + 0x269ec3;
      puVar5 = (undefined2 *)
               FUN_08847130(*(undefined1 *)
                             ((int)&local_84 + (local_60 >> 0x10 & 0x7fffU) % (local_90 >> 0x10) + 2
                             ),1);
      *(undefined2 *)(param_1 + 6) = *puVar5;
      func_0x08b4399c(&local_90,2);
      iVar1 = *(int *)(param_1 + 0x20);
      sVar2 = *(short *)(param_1 + 6);
    }
    *(short *)(iVar1 + 0x16) = sVar2;
    iVar1 = FUN_088470b8((int)*(short *)(param_1 + 6));
    *(undefined2 *)(*(int *)(param_1 + 0x20) + 0x3c) =
         *(undefined2 *)(&DAT_089ce878 + *(char *)(iVar1 + 6) * 2);
    *(undefined2 *)(*(int *)(param_1 + 0x20) + 0x3a) = 0;
    iVar1 = *(int *)(param_1 + 0x20);
  }
  switch(*(undefined2 *)(iVar1 + 0x12)) {
  case 3:
  case 4:
  case 5:
  case 6:
  case 9:
  case 0xd:
    iVar1 = func_0x08b43424(param_4,(int)*(short *)(iVar1 + 0x16));
    if (iVar1 != 0) {
      *(undefined2 *)(*(int *)(param_1 + 0x20) + 0x44) = *(undefined2 *)(iVar1 + 2);
      *(undefined2 *)(*(int *)(param_1 + 0x20) + 0x46) = *(undefined2 *)(iVar1 + 4);
      *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x48) = *(undefined4 *)(iVar1 + 8);
      *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x4c) = *(undefined4 *)(iVar1 + 0xc);
      local_2c = *(undefined4 *)(iVar1 + 0x10);
      local_28 = local_2c;
      local_24 = local_2c;
      FUN_089a34c0(*(int *)(param_1 + 0x20) + 0x5c,&local_2c);
      local_2c = *(undefined4 *)(iVar1 + 0x14);
      local_28 = local_2c;
      local_24 = local_2c;
      FUN_089a34c0(*(int *)(param_1 + 0x20) + 0x68,&local_2c);
    }
  }
  return;
}

