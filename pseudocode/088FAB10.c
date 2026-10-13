/* Entry 0x088FAB10 | file offset 0x000F7AE8 | FUN_088fab10 | bytes 148 */

void FUN_088fab10(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined2 uVar1;
  
  FUN_088faa4c(param_1,param_2,param_3,param_4,param_5,0);
  uVar1 = FUN_088fb934(param_4,param_5,1);
  (&DAT_09afc7de)[param_1 * 0x830] = uVar1;
  (&DAT_09afc8fa)[param_1 * 0x1060] = (char)param_4;
  (&DAT_09afc8fb)[param_1 * 0x1060] = (char)param_5;
  return;
}

