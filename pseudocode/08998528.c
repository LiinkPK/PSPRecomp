/* Entry 0x08998528 | file offset 0x00195500 | FUN_08998528 | bytes 80 */

undefined8 FUN_08998528(undefined4 param_1,uint param_2,undefined4 param_3,uint param_4)

{
  return CONCAT44(param_2 & 0x7fffffff | param_4 & 0x80000000,param_1);
}

