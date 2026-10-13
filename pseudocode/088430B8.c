/* Entry 0x088430B8 | file offset 0x00040090 | FUN_088430b8 | bytes 212 */

void FUN_088430b8(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 int param_6,int param_7,int param_8)

{
  int iVar1;
  
  iVar1 = FUN_088470b8(param_2);
  *param_1 = iVar1;
  FUN_08844fa4(iVar1 + 0x34,&DAT_089c8850);
  FUN_0884333c(param_1,param_3,param_4);
  if ((param_5 != 0) && (param_6 != 0)) {
    FUN_088459e0(param_1,param_5,param_6);
  }
  if ((param_7 != 0) && (param_8 != 0)) {
    FUN_08843460(param_1,param_7,param_8);
  }
  return;
}

