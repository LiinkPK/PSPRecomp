/* Entry 0x08911990 | file offset 0x0010E968 | FUN_08911990 | bytes 156 */

void FUN_08911990(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 param_5)

{
  undefined4 uVar1;
  int iVar2;
  int local_30 [7];
  
  local_30[0] = 0;
  local_30[1] = 1;
  local_30[2] = 3;
  local_30[3] = 1;
  local_30[4] = 1;
  local_30[5] = 0;
  local_30[6] = 1;
  *(undefined1 *)(param_2 + 3) = param_5;
  param_2[1] = param_4;
  param_2[2] = param_1;
  *(undefined1 *)((int)param_2 + 0xd) = 1;
  *(undefined1 *)((int)param_2 + 0xe) = 0;
  *(undefined1 *)((int)param_2 + 0xf) = 1;
  iVar2 = local_30[*(char *)(param_2 + 3)];
  if ((iVar2 == 1) && (DAT_089d5f1d != '\0')) {
    iVar2 = 0;
  }
  uVar1 = FUN_088daa40(param_3,iVar2,0);
  *param_2 = uVar1;
  return;
}

