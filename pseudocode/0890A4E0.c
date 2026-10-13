/* Entry 0x0890A4E0 | file offset 0x001074B8 | FUN_0890a4e0 | bytes 444 */

void FUN_0890a4e0(int *param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,int param_7)

{
  int iVar1;
  undefined4 local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  local_50 = 2;
  if (param_3 == 0) {
    local_50 = 1;
  }
  local_40 = 1;
  local_4c = param_4;
  local_48 = param_6;
  local_44 = param_5;
  local_3c = param_7;
  FUN_08903684(param_1 + 1,&local_50);
  param_1[0x43] = (int)(param_1 + 0x68);
  *param_1 = param_2;
  if (*(int *)(param_2 + 0x198) == 0) {
    *(int **)(param_2 + 0x198) = param_1 + 0x6a;
    *(int **)(param_2 + 0x194) = param_1 + 0x6a;
    param_1[0x6a] = 0;
  }
  else {
    **(undefined4 **)(param_2 + 0x198) = param_1 + 0x6a;
    param_1[0x6a] = 0;
    *(int **)(param_2 + 0x198) = param_1 + 0x6a;
  }
  param_1[0x6e] = param_7;
  if (param_3 < 1) {
    if (-1 < param_3) {
      local_2c = 0;
      iVar1 = FUN_0885c6cc(param_7,0x138,0,0,1,0);
      local_30 = local_2c;
      if (iVar1 != 0) {
        local_30 = iVar1;
        FUN_0890b824(iVar1,param_4 + -1,param_6,param_7);
      }
      param_1[0x6f] = local_30;
    }
  }
  else if (param_3 < 2) {
    local_34 = 0;
    iVar1 = FUN_0885c6cc(param_7,0x110,0,0,1,0);
    local_38 = local_34;
    if (iVar1 != 0) {
      local_38 = iVar1;
      FUN_0890bf94(iVar1,param_6,param_7);
    }
    param_1[0x6f] = local_38;
  }
  return;
}

