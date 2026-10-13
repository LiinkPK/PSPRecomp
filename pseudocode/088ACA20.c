/* Entry 0x088ACA20 | file offset 0x000A99F8 | FUN_088aca20 | bytes 164 */

void FUN_088aca20(int param_1)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = *(char *)(DAT_089d7280 + 3);
  while (cVar1 != '\0') {
    FUN_08883f9c(DAT_089d69e0,1,0);
    cVar1 = *(char *)(DAT_089d7280 + 3);
  }
  uVar2 = *(uint *)(param_1 + 0xef8);
  *(uint *)(param_1 + 0xef8) = uVar2 | 1;
  *(uint *)(param_1 + 0xef8) = uVar2 | 0x10001;
  *(uint *)(param_1 + 0xef8) = uVar2 | 0x10003;
  FUN_088ad460(param_1);
  *(undefined1 *)(param_1 + 0xefc) = 1;
  FUN_088ac1ac(param_1,1,*(undefined1 *)(param_1 + 0xefc));
  return;
}

