/* Entry 0x0886FAC0 | file offset 0x0006CA98 | FUN_0886fac0 | bytes 216 */

void FUN_0886fac0(undefined4 param_1,int param_2,int param_3,undefined4 param_4,uint param_5,
                 int param_6)

{
  int iVar1;
  
  if ((((-1 < param_2) && (param_2 < 0xfd2)) && (-1 < param_3)) &&
     (iVar1 = FUN_08871674(DAT_089d5ff0), param_3 <= iVar1 + -1)) {
    param_2 = param_2 * 0x1c;
    *(short *)(&DAT_08b63880 + param_2) = (short)param_3;
    *(uint *)(&DAT_08b63884 + param_2) = param_6 << 0x13 | param_5 >> 0xd;
    *(undefined2 *)(&DAT_08b63882 + param_2) = 0;
    FUN_08935828(param_2 + 0x8b63888,0,0x14,param_6 >> 0xd);
  }
  return;
}

