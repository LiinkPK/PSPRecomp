/* Entry 0x088ACEE0 | file offset 0x000A9EB8 | FUN_088acee0 | bytes 44 */

undefined4 FUN_088acee0(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 == 2) {
    uVar1 = *(undefined4 *)(&DAT_089d6df4 + param_2 * 0x10);
  }
  else {
    uVar1 = *(undefined4 *)(&DAT_089d6df0 + param_2 * 0x10);
  }
  return uVar1;
}

