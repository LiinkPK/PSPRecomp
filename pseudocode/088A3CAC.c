/* Entry 0x088A3CAC | file offset 0x000A0C84 | FUN_088a3cac | bytes 104 */

uint FUN_088a3cac(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = DAT_089d6d38;
  iVar1 = FUN_088a3f90(param_2,param_3,DAT_089d6d38);
  if (iVar1 == 1) {
    DAT_089d6d38 = DAT_089d6d38 + 1 | 0x80000000;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

