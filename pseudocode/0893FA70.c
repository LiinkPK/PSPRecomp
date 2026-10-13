/* Entry 0x0893FA70 | file offset 0x0013CA48 | FUN_0893fa70 | bytes 152 */

void FUN_0893fa70(int *param_1,uint param_2)

{
  int iVar1;
  short *psVar2;
  short *psVar3;
  
  psVar2 = (short *)*param_1;
  iVar1 = FUN_0893f93c(param_2);
  psVar3 = psVar2 + 1;
  if (iVar1 == 0) {
    param_2 = DAT_089d9130;
  }
  if (param_2 < 0x10000) {
    *psVar2 = (short)param_2;
  }
  else {
    *psVar2 = (short)(param_2 - 0x10000 >> 10) + -0x2800;
    *psVar3 = ((ushort)(param_2 - 0x10000) & 0x3ff) + 0xdc00;
    psVar3 = psVar2 + 2;
  }
  *param_1 = (int)psVar3;
  return;
}

