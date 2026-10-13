/* Entry 0x088AC8C8 | file offset 0x000A98A0 | FUN_088ac8c8 | bytes 224 */

undefined4 FUN_088ac8c8(int param_1,char param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  
  cVar1 = *(char *)(DAT_089d7280 + 3);
  while (cVar1 != '\0') {
    FUN_08883f9c(DAT_089d69e0,1,0);
    cVar1 = *(char *)(DAT_089d7280 + 3);
  }
  if (DAT_089d5f1f == '\0') {
    if ((param_2 == '\0') && ((*(uint *)(param_1 + 0xef8) & 0x2000) == 0)) {
      uVar2 = 0;
    }
    else {
      *(uint *)(param_1 + 0xef8) = *(uint *)(param_1 + 0xef8) & 0xffffdfff;
      FUN_088ad460(param_1);
      uVar3 = *(uint *)(param_1 + 0xef8);
      *(uint *)(param_1 + 0xef8) = uVar3 | 1;
      *(uint *)(param_1 + 0xef8) = uVar3 | 3;
      uVar2 = FUN_088ac1ac(param_1,1,*(undefined1 *)(param_1 + 0xefc));
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

