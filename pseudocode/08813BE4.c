/* Entry 0x08813BE4 | file offset 0x00010BBC | FUN_08813be4 | bytes 148 */

void FUN_08813be4(undefined4 param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = 0;
  local_c = 0;
  iVar1 = FUN_0885ca98(param_1,3,
                       (int)param_2[2] << 0x10 | (int)param_2[3] << 0x18 |
                       (int)*param_2 | (int)param_2[1] << 8,param_3);
  if (iVar1 != 0) {
    FUN_08870b10(*(undefined4 *)(iVar1 + 8),&local_10,&local_c);
    FUN_0885911c(DAT_089d4dc8 + 0x500,param_4,local_10,local_c);
  }
  return;
}

