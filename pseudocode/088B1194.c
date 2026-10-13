/* Entry 0x088B1194 | file offset 0x000AE16C | FUN_088b1194 | bytes 156 */

undefined4
FUN_088b1194(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  undefined4 uVar1;
  
  if (*DAT_089d7280 == '\0') {
    *(undefined4 *)(param_1 + 0x588) = param_3;
    *(undefined4 *)(param_1 + 0x58c) = param_4;
    FUN_08935828(param_1,0,0x2c4);
    FUN_088b168c(DAT_089d7280,param_1,0x2c4);
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x38) = param_2;
    *(undefined4 *)(param_1 + 0x23c) = param_5;
    uVar1 = FUN_088b1054(param_1);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

