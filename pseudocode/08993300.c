/* Entry 0x08993300 | file offset 0x001902D8 | FUN_08993300 | bytes 516 */

int FUN_08993300(int param_1,uint param_2,int param_3,int param_4,code *param_5,int param_6,
                code *param_7,undefined4 param_8,undefined4 uStackX_0,int iStackX_4,
                undefined4 uStackX_8,int iStackX_c)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_d0 [112];
  int local_60;
  uint local_5c;
  int local_58;
  int local_54;
  uint local_4c;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  uint local_38;
  undefined4 local_34;
  
  local_3c = uStackX_0;
  bVar1 = param_1 == 0;
  local_38 = (uint)(param_6 != 0 || bVar1);
  local_34 = param_8;
  if ((param_1 == 0) || (iStackX_4 != 0)) {
    if (param_1 == 0) {
      iVar2 = iStackX_c + param_2 * param_3;
      if (param_7 == (code *)0x0) {
        param_1 = FUN_0885c404(iVar2);
      }
      else {
        param_1 = (*param_7)(iVar2);
      }
      if (param_1 != 0) {
        param_1 = param_1 + iStackX_c;
      }
      if (param_1 == 0) {
        return 0;
      }
    }
    if (iStackX_c != 0) {
      *(int *)(param_1 - iStackX_c) = param_2 * param_3;
      ((int *)(param_1 - iStackX_c))[1] = ~param_2;
    }
  }
  if (local_38 != 0) {
    FUN_08993260(auStack_d0,&local_60,1);
    local_44 = local_34;
    local_40 = local_3c;
    local_60 = param_1;
    local_5c = param_2;
    local_58 = param_3;
    local_4c = (uint)bVar1;
    local_48 = param_6;
  }
  if ((param_5 != (code *)0x0) && (iVar3 = 0, iVar2 = param_1, 0 < (int)param_2)) {
    do {
      if (param_4 == 0) {
        (*param_5)(iVar2,0,0,0,0,0,0,0,0);
      }
      else {
        (*param_5)(iVar2,param_4);
      }
      if (param_6 != 0) {
        local_54 = local_54 + 1;
      }
      if (param_4 != 0) {
        param_4 = param_4 + param_3;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + param_3;
    } while (iVar3 < (int)param_2);
  }
  if (local_38 != 0) {
    DAT_089da444 = (undefined4 *)*DAT_089da444;
  }
  return param_1;
}

