/* Entry 0x088A52EC | file offset 0x000A22C4 | FUN_088a52ec | bytes 96 */

void FUN_088a52ec(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_08869ab4(param_2,"resident.frr");
  if (iVar1 != 0) {
    FUN_088a573c(param_1,"effect/resident/resident.frr",*(undefined4 *)(iVar1 + 4),
                 *(undefined4 *)(iVar1 + 8));
  }
  return;
}

