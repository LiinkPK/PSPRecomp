/* Entry 0x088CBCB4 | file offset 0x000C8C8C | FUN_088cbcb4 | bytes 112 */

void FUN_088cbcb4(char *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = param_1[0x773];
  uVar2 = FUN_088b97d0((int)*param_1);
  uVar2 = FUN_088bca2c(uVar2);
  FUN_088b74a4(param_1 + cVar1 * 0xc6 + 0x10);
  FUN_088bbe78(uVar2,param_1 + 0x10);
  return;
}

