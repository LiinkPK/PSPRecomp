/* Entry 0x088A04A8 | file offset 0x0009D480 | FUN_088a04a8 | bytes 96 */

void FUN_088a04a8(undefined4 param_1,undefined4 param_2,char param_3)

{
  if (param_3 == '\x01') {
    FUN_08862028(param_1,param_2);
  }
  else {
    FUN_0893476c(param_1,"DISC0:/PSP_GAME/USRDIR/DATA/BGM/%s",param_2);
  }
  FUN_08935d58(param_1);
  return;
}

