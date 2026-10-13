/* Entry 0x08916E50 | file offset 0x00113E28 | FUN_08916e50 | bytes 136 */

void FUN_08916e50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = DAT_089d83d8;
  FUN_08916bb4(DAT_089d83d8,param_1);
  FUN_088650a4(iVar1 + 4);
  puVar2 = (undefined1 *)FUN_08912d20(param_2,param_3,param_4);
  if (puVar2 != (undefined1 *)0x0) {
    FUN_08917b80(*puVar2);
  }
  return;
}

