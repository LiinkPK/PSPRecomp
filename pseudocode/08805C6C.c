/* Entry 0x08805C6C | file offset 0x00002C44 | FUN_08805c6c | bytes 824 */

int FUN_08805c6c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 *local_30;
  
  FUN_0883975c(param_1,2,param_2);
  *(undefined **)(param_1 + 0x544) = &DAT_089c6a20;
  *(undefined4 *)(param_1 + 0x580) = 0;
  *(undefined4 *)(param_1 + 0xb4c) = 0;
  iVar3 = 0;
  iVar5 = param_1;
  do {
    *(undefined4 *)(iVar5 + 0xb1c) = 0;
    *(undefined2 *)(iVar5 + 0xb20) = 0;
    *(undefined1 *)(iVar5 + 0xb22) = 0;
    *(undefined1 *)(iVar5 + 0xb23) = 0;
    *(undefined1 *)(iVar5 + 0xb24) = 0;
    *(undefined4 *)(iVar5 + 0xb28) = 0;
    *(undefined4 *)(iVar5 + 0xb2c) = 0;
    *(undefined4 *)(iVar5 + 0xb30) = 0;
    iVar3 = iVar3 + 1;
    iVar5 = iVar5 + 0x18;
  } while (iVar3 < 2);
  FUN_089a3868(param_1 + 0x560,&DAT_09af84c0);
  *(undefined4 *)(param_1 + 0x570) = 0;
  *(undefined4 *)(param_1 + 0x574) = 0;
  *(undefined4 *)(param_1 + 0x578) = 0;
  *(undefined4 *)(param_1 + 0x57c) = 0;
  *(undefined4 *)(param_1 + 0x580) = 0;
  iVar5 = FUN_088b70c8((int)*(char *)(*(int *)(param_1 + 0x2f8) + 6));
  *(int *)(param_1 + 0x550) = iVar5;
  if (iVar5 != 0) {
    uVar1 = FUN_0884e58c(DAT_089d4da0,*(undefined1 *)(iVar5 + 4));
    *(undefined4 *)(param_1 + 0x39c) = uVar1;
  }
  local_30 = (undefined4 *)0x0;
  puVar2 = (undefined4 *)FUN_088312d0(param_1,0x30);
  puVar4 = local_30;
  if (puVar2 != (undefined4 *)0x0) {
    puVar4 = puVar2;
  }
  *(undefined4 **)(param_1 + 0x4a8) = puVar4;
  *puVar4 = 0x3f000000;
  puVar4[1] = 0x3f800000;
  puVar4[2] = 0x3f800000;
  puVar4[3] = 0x41200000;
  local_40 = 0;
  local_3c = 0x3f000000;
  local_38 = 0;
  local_34 = 0x3f800000;
  FUN_089a3868(puVar4 + 4,&local_40);
  puVar4[8] = 0;
  FUN_0883072c(param_1 + 0x730,*(undefined4 *)(param_1 + 0x394),0);
  *(undefined4 *)(param_1 + 0xb50) = 0;
  FUN_08806294(param_1);
  FUN_08806320(param_1);
  *(undefined4 *)(param_1 + 0x684) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x68c) = 0;
  *(undefined4 *)(param_1 + 0x688) = 0;
  *(undefined4 *)(param_1 + 0x690) = 0;
  *(undefined4 *)(param_1 + 0x69c) = 0;
  *(undefined4 *)(param_1 + 0x694) = 0;
  *(undefined4 *)(param_1 + 0x6a4) = 0;
  *(undefined4 *)(param_1 + 0x6a0) = 0;
  *(undefined4 *)(param_1 + 0x6ac) = 0;
  *(undefined4 *)(param_1 + 0x6a8) = 0;
  *(undefined2 *)(param_1 + 0x6b8) = 0xffff;
  *(undefined1 *)(param_1 + 0x6ba) = 0;
  *(undefined1 *)(param_1 + 0x6bb) = 0;
  iVar3 = 0;
  iVar5 = param_1;
  do {
    *(undefined4 *)(iVar5 + 0x6bc) = 0;
    iVar3 = iVar3 + 1;
    iVar5 = iVar5 + 4;
  } while (iVar3 < 7);
  *(undefined4 *)(param_1 + 0x71c) = 0;
  iVar3 = 0;
  iVar5 = param_1;
  do {
    iVar3 = iVar3 + 1;
    *(undefined1 *)(iVar5 + 0x6d8) = 0;
    iVar5 = param_1 + iVar3;
  } while (iVar3 < 0x40);
  *(undefined4 *)(param_1 + 0x718) = 0;
  *(undefined1 *)(param_1 + 0x720) = 0;
  *(undefined1 *)(param_1 + 0x721) = 0;
  *(undefined1 *)(param_1 + 0x722) = 0;
  *(undefined1 *)(param_1 + 0x723) = 0;
  FUN_08806b94(param_1 + 0x6bc,(int)*(short *)(*(int *)(param_1 + 0x2f8) + 2));
  *(undefined4 *)(param_1 + 0x724) = 0;
  local_50 = *(undefined4 *)(param_1 + 0x90);
  local_4c = *(undefined4 *)(param_1 + 0x94);
  local_48 = *(undefined4 *)(param_1 + 0x98);
  local_44 = *(undefined4 *)(param_1 + 0x9c);
  FUN_089a3868(param_1 + 0xa90,&local_50);
  FUN_089a3868(param_1 + 0xaa0,&local_50);
  *(undefined4 *)(param_1 + 0xab4) = 0;
  *(undefined4 *)(param_1 + 0xab0) = 0;
  *(undefined4 *)(param_1 + 0xac0) = 0;
  *(undefined4 *)(param_1 + 0xabc) = 0;
  *(undefined4 *)(param_1 + 0xab8) = 0;
  *(undefined4 *)(param_1 + 0xad0) = 0;
  *(undefined4 *)(param_1 + 0xacc) = 0;
  *(undefined4 *)(param_1 + 0xac8) = 0;
  *(undefined4 *)(param_1 + 0xac4) = 0;
  *(undefined4 *)(param_1 + 0xae0) = 0;
  *(undefined4 *)(param_1 + 0xadc) = 0;
  *(undefined4 *)(param_1 + 0xad8) = 0;
  *(undefined4 *)(param_1 + 0xad4) = 0;
  *(undefined4 *)(param_1 + 0xae4) = 0;
  *(undefined4 *)(param_1 + 0xae8) = 0;
  *(undefined4 *)(param_1 + 0xaec) = 0;
  *(undefined1 *)(param_1 + 0xaf0) = 0;
  *(undefined4 *)(param_1 + 0xb00) = 0;
  *(undefined4 *)(param_1 + 0xb04) = 0;
  *(undefined4 *)(param_1 + 0xb08) = 0;
  *(undefined4 *)(param_1 + 0xb0c) = 0;
  *(undefined4 *)(param_1 + 0xb10) = 0;
  *(undefined4 *)(param_1 + 0xb14) = 0;
  *(undefined4 *)(param_1 + 0xb18) = 0;
  iVar5 = DAT_089d4958;
  piVar6 = (int *)(DAT_089d4958 + 0x1c);
  if (*(int *)(DAT_089d4958 + 0x20) == 0) {
    *(int *)(DAT_089d4958 + 0x20) = param_1;
    *piVar6 = param_1;
    *(undefined4 *)(param_1 + 0xb54) = 0;
  }
  else {
    *(int *)(*(int *)(DAT_089d4958 + 0x20) + 0xb54) = param_1;
    *(undefined4 *)(param_1 + 0xb54) = 0;
    *(int *)(iVar5 + 0x20) = param_1;
  }
  return param_1;
}

