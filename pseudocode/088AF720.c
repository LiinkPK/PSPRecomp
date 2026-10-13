/* Entry 0x088AF720 | file offset 0x000AC6F8 | FUN_088af720 | bytes 44 */

undefined4 FUN_088af720(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 == 2) {
    uVar1 = *(undefined4 *)(&DAT_089d714c + param_2 * 0x10);
  }
  else {
    uVar1 = *(undefined4 *)(&DAT_089d7148 + param_2 * 0x10);
  }
  return uVar1;
}

