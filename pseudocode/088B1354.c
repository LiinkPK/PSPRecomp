/* Entry 0x088B1354 | file offset 0x000AE32C | FUN_088b1354 | bytes 144 */

void FUN_088b1354(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0887afbc(*(undefined4 *)(DAT_089d712c + 0xee0),
                       *(undefined4 *)(&DAT_089d7270 + param_2 * 4),0);
  FUN_088b1230(param_1,uVar1,param_3,param_4,param_5,0);
  return;
}

