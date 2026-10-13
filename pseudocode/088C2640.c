/* Entry 0x088C2640 | file offset 0x000BF618 | FUN_088c2640 | bytes 80 */

undefined4
FUN_088c2640(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_5 + 4);
  FUN_089200f0(DAT_089d712c + 0x3f548,uVar1);
  *(undefined4 *)(param_2 + 4) = uVar1;
  return 1;
}

