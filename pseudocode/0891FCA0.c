/* Entry 0x0891FCA0 | file offset 0x0011CC78 | FUN_0891fca0 | bytes 404 */

void FUN_0891fca0(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 local_90;
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
  undefined4 local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  iVar3 = *param_1 + 1;
  *param_1 = iVar3;
  if (0 < iVar3) {
    iVar4 = iVar3 * 0x34;
    piVar2 = param_1 + iVar3 * 0xd + 2;
    piVar1 = param_1 + iVar3 * 0xd + -0xb;
    do {
      local_5c = *piVar1;
      local_58 = piVar1[1];
      local_54 = piVar1[2];
      local_50 = piVar1[3];
      local_4c = piVar1[4];
      local_48 = piVar1[5];
      local_44 = piVar1[6];
      local_40 = piVar1[7];
      local_3c = piVar1[8];
      local_38 = piVar1[9];
      local_34 = piVar1[10];
      local_30 = piVar1[0xb];
      local_2c = piVar1[0xc];
      FUN_08922680(piVar2,&local_5c);
      FUN_08922654(&local_5c,2);
      iVar4 = iVar4 + -0x34;
      piVar2 = piVar2 + -0xd;
      piVar1 = piVar1 + -0xd;
    } while (0 < iVar4);
  }
  local_90 = *param_2;
  local_8c = param_2[1];
  local_88 = param_2[2];
  local_84 = param_2[3];
  local_80 = param_2[4];
  local_7c = param_2[5];
  local_78 = param_2[6];
  local_74 = param_2[7];
  local_70 = param_2[8];
  local_6c = param_2[9];
  local_68 = param_2[10];
  local_64 = param_2[0xb];
  local_60 = param_2[0xc];
  FUN_08922680(param_1 + 0xf,&local_90);
  FUN_08922654(&local_90,2);
  FUN_089226f8(param_1 + 2);
  return;
}

