/* Entry 0x088C2C5C | file offset 0x000BFC34 | FUN_088c2c5c | bytes 88 */

bool FUN_088c2c5c(int *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_088aba9c(DAT_089d712c);
  *param_1 = iVar1 / 0xe10;
  iVar2 = *param_3;
  param_1[1] = iVar2;
  return iVar2 <= iVar1 / 0xe10;
}

